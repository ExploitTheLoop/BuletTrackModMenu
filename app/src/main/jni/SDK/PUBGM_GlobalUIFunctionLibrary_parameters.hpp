#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_GlobalUIFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize
struct UGlobalUIFunctionLibrary_C_SetSpecialIconWithSprite2DMatchSize_Params
{
	class UImage*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     specialIconPath;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetZoneDelay
struct UGlobalUIFunctionLibrary_C_GetZoneDelay_Params
{
	int                                                ZoneID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                fakeShowDelay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDelay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UnixTimeToLocalizedTimeStrGMT
struct UGlobalUIFunctionLibrary_C_UnixTimeToLocalizedTimeStrGMT_Params
{
	int                                                Year;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                sec;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               start_from_month;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     h_m_s_format;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TimeStr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow
struct UGlobalUIFunctionLibrary_C_GetItemTableRow_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Item_type                        Item;                                                     // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS
struct UGlobalUIFunctionLibrary_C_SecondsToMMSS_Params
{
	int                                                Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FormatTime;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup
struct UGlobalUIFunctionLibrary_C_PlaySoundPopup_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundToggle
struct UGlobalUIFunctionLibrary_C_PlaySoundToggle_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundSubTab
struct UGlobalUIFunctionLibrary_C_PlaySoundSubTab_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab
struct UGlobalUIFunctionLibrary_C_PlaySoundTab_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPathWithLight
struct UGlobalUIFunctionLibrary_C_GetBgQualityPathWithLight_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset
struct UGlobalUIFunctionLibrary_C_GetUIRectOffset_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Left;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Right;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType
struct UGlobalUIFunctionLibrary_C_IsConfigGameModeSubType_Params
{
	EGameModeSubType                                   InSubType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType
struct UGlobalUIFunctionLibrary_C_IsConfigGameModeType_Params
{
	EGameModeType                                      InGameModeType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI
struct UGlobalUIFunctionLibrary_C_GetGlobalLuaUI_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGlobalLuaWidget_C*                          AsGlobal_Lua_Widget;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushWithPath
struct UGlobalUIFunctionLibrary_C_GetBrushWithPath_Params
{
	struct FString                                     ImagePath;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ImageWidth;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ImageHeight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 OutBrush;                                                 // (Parm, OutParm)
	bool                                               bOK;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraToTransform_2
struct UGlobalUIFunctionLibrary_C_SwitchSceneCameraToTransform_2_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4
struct UGlobalUIFunctionLibrary_C_GetVector4_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              W;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Vector;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.DestroyLobbyCameras
struct UGlobalUIFunctionLibrary_C_DestroyLobbyCameras_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox
struct UGlobalUIFunctionLibrary_C_InitAmmoDropBox_Params
{
	class UMeshComponent*                              MeshComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LOD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon
struct UGlobalUIFunctionLibrary_C_GetRankIntegralBigIcon_Params
{
	struct FString                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon
struct UGlobalUIFunctionLibrary_C_GetRankIntegralSmallIcon_Params
{
	struct FString                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon
struct UGlobalUIFunctionLibrary_C_GetRankIntegralSubIcon_Params
{
	struct FString                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty
struct UGlobalUIFunctionLibrary_C_SetArenaWeaponLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateMPCLightDirection
struct UGlobalUIFunctionLibrary_C_UpdateMPCLightDirection_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral
struct UGlobalUIFunctionLibrary_C_SetRankInteral_Params
{
	struct FBP_STRUCT_RankIntegralLevel_type           RankIntegralLevelInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UImage*                                      ImageIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock_Rank;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                Canvas_Panel_Star;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_Star;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock_Star;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCurrentCamera
struct UGlobalUIFunctionLibrary_C_GetCurrentCamera_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlayModelSequence
struct UGlobalUIFunctionLibrary_C_PlayModelSequence_Params
{
	struct FString                                     Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        playingsequence;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraToTransform
struct UGlobalUIFunctionLibrary_C_SwitchSceneCameraToTransform_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath
struct UGlobalUIFunctionLibrary_C_SetImageFromPath_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCharacterImage
struct UGlobalUIFunctionLibrary_C_SetCharacterImage_Params
{
	struct FString                                     imgPath;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UImage*                                      imageItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPopularityColor
struct UGlobalUIFunctionLibrary_C_GetPopularityColor_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Output;                                                   // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite
struct UGlobalUIFunctionLibrary_C_GetBrushFromSprite_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Result;                                                   // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadImage
struct UGlobalUIFunctionLibrary_C_LoadImage_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite
struct UGlobalUIFunctionLibrary_C_LoadSprite_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath
struct UGlobalUIFunctionLibrary_C_GetXieQualityPath_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath
struct UGlobalUIFunctionLibrary_C_GetBgQualityPath_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath
struct UGlobalUIFunctionLibrary_C_GetQualityPath_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizationString
struct UGlobalUIFunctionLibrary_C_GetLocalizationString_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Ret;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality
struct UGlobalUIFunctionLibrary_C_SetCornerQuality_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor
struct UGlobalUIFunctionLibrary_C_GetPingColor_Params
{
	float                                              ms;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath
struct UGlobalUIFunctionLibrary_C_SetImgWithPath_Params
{
	class UImage*                                      ImgRef;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsMatchSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendLobbyEventClickReport
struct UGlobalUIFunctionLibrary_C_SendLobbyEventClickReport_Params
{
	struct FString                                     SubEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     para1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     para2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenSlapUrl
struct UGlobalUIFunctionLibrary_C_OpenSlapUrl_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName
struct UGlobalUIFunctionLibrary_C_GetItemName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChineseSensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutName;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath
struct UGlobalUIFunctionLibrary_C_UpdateImageByPath_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertRGBAStr
struct UGlobalUIFunctionLibrary_C_ConvertRGBAStr_Params
{
	struct FString                                     RGBAstr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              R;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendGemClickReport
struct UGlobalUIFunctionLibrary_C_SendGemClickReport_Params
{
	struct FString                                     SubEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     para1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     para2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsJapanOrKorea
struct UGlobalUIFunctionLibrary_C_IsJapanOrKorea_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint
struct UGlobalUIFunctionLibrary_C_UpdateImageTint_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor
struct UGlobalUIFunctionLibrary_C_ChangeBrushColor_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 NewBrush;                                                 // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateButtonColor
struct UGlobalUIFunctionLibrary_C_UpdateButtonColor_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod
struct UGlobalUIFunctionLibrary_C_GetCameraMod_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mod;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertSecondsToString
struct UGlobalUIFunctionLibrary_C_ConvertSecondsToString_Params
{
	int                                                Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     timestring;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLangueTable
struct UGlobalUIFunctionLibrary_C_GetLangueTable_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEDataTable*                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByWidget
struct UGlobalUIFunctionLibrary_C_ShowItemTipsByWidget_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LocalCoordinate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsLimit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Times;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGuidonInfo
struct UGlobalUIFunctionLibrary_C_GetGuidonInfo_Params
{
	struct FString                                     code;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuidonConfig_type                GuidonConfig;                                             // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty
struct UGlobalUIFunctionLibrary_C_SetHumanLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty
struct UGlobalUIFunctionLibrary_C_SetWeaponLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty
struct UGlobalUIFunctionLibrary_C_SetSceneSkyLightProperty_Params
{
	struct FString                                     lightName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  Trans;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty
struct UGlobalUIFunctionLibrary_C_SetLobbyDefaultLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid
struct UGlobalUIFunctionLibrary_C_SetAndroidKeyIsValid_Params
{
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat
struct UGlobalUIFunctionLibrary_C_numToTimeStrFormat_Params
{
	int                                                timeNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TimeStr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr
struct UGlobalUIFunctionLibrary_C_numToTimeStr_Params
{
	int                                                timeNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TimeStr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IdToColor
struct UGlobalUIFunctionLibrary_C_IdToColor_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetOnLineColor
struct UGlobalUIFunctionLibrary_C_GetOnLineColor_Params
{
	int                                                onlinestate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bonline;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage
struct UGlobalUIFunctionLibrary_C_UpdateNationImage_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RoleNation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSystemCameraByIndex
struct UGlobalUIFunctionLibrary_C_SwitchSystemCameraByIndex_Params
{
	struct FString                                     managerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyCameraByIndex
struct UGlobalUIFunctionLibrary_C_SwitchLobbyCameraByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg
struct UGlobalUIFunctionLibrary_C_SwitchLobbyMeshBg_Params
{
	int                                                BgIdx;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsLengthyScreen
struct UGlobalUIFunctionLibrary_C_IsLengthyScreen_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWideScreen;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyDragDropWidget
struct UGlobalUIFunctionLibrary_C_GetLobbyDragDropWidget_Params
{
	int                                                dragDropType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetItemQuality
struct UGlobalUIFunctionLibrary_C_SetItemQuality_Params
{
	int                                                ItemQuality;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      imageres;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetIntimacy
struct UGlobalUIFunctionLibrary_C_SetIntimacy_Params
{
	class UImage*                                      heart;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                intimacynum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  intimacyText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyRankTexture
struct UGlobalUIFunctionLibrary_C_GetLobbyRankTexture_Params
{
	int                                                rankIntegral;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty
struct UGlobalUIFunctionLibrary_C_SetScenePointLightProperty_Params
{
	struct FString                                     lightName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  targetTrans;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                inverseSquareFalloff;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty
struct UGlobalUIFunctionLibrary_C_SetSceneDirectionalLightProperty_Params
{
	struct FString                                     lightName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  targetTrans;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraByIndex
struct UGlobalUIFunctionLibrary_C_SwitchSceneCameraByIndex_Params
{
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipNotify;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsSegmentLimit
struct UGlobalUIFunctionLibrary_C_SetCorpsSegmentLimit_Params
{
	class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  textWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsLevelLimit
struct UGlobalUIFunctionLibrary_C_SetCorpsLevelLimit_Params
{
	class UTextBlock*                                  textWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon
struct UGlobalUIFunctionLibrary_C_GetLobbyCorpsIcon_Params
{
	int                                                IconID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlatfromDisplayName
struct UGlobalUIFunctionLibrary_C_GetPlatfromDisplayName_Params
{
	struct FString                                     strChannel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     showChannel;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlayerPrefs
struct UGlobalUIFunctionLibrary_C_GetPlayerPrefs_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerPrefs_C*                              bp_playerprefs;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowLobbyMenuEnterAnimation
struct UGlobalUIFunctionLibrary_C_ShowLobbyMenuEnterAnimation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp
struct UGlobalUIFunctionLibrary_C_GetLobbyGlobalBp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGlobal_Bp_C*                                AsGlobal_Bp;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture
struct UGlobalUIFunctionLibrary_C_GetLobbyFrameTexture_Params
{
	int                                                frameLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunctionNoFetch
struct UGlobalUIFunctionLibrary_C_InvoleBpFunctionNoFetch_Params
{
	struct FString                                     InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InFunname;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckChatPrivacyAcceptStatus
struct UGlobalUIFunctionLibrary_C_CheckChatPrivacyAcceptStatus_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChatPrivacyAcceptStatus;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGVoiceInterface
struct UGlobalUIFunctionLibrary_C_GetGVoiceInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGVoiceInterface*                            outputObj;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenUseItemUI
struct UGlobalUIFunctionLibrary_C_OpenUseItemUI_Params
{
	struct FString                                     itemInsID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertURLByLanguage
struct UGlobalUIFunctionLibrary_C_ConvertURLByLanguage_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     convertedURL;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isChineseSymbol
struct UGlobalUIFunctionLibrary_C_isChineseSymbol_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isSpace
struct UGlobalUIFunctionLibrary_C_isSpace_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo
struct UGlobalUIFunctionLibrary_C_GetNationInfo_Params
{
	struct FString                                     NationCode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RegionConfig_type                NationInfo;                                               // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes
struct UGlobalUIFunctionLibrary_C_SetImageWithSpriteRes_Params
{
	struct FString                                     ResPath;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch
struct UGlobalUIFunctionLibrary_C_GetNationSwitch_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBpLuaObject
struct UGlobalUIFunctionLibrary_C_GetBpLuaObject_Params
{
	struct FString                                     bp_name;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALuaClassObj*                                Lua_obj;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen
struct UGlobalUIFunctionLibrary_C_CheckIfMenuOpen_Params
{
	int                                                MenuId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidStringAll
struct UGlobalUIFunctionLibrary_C_GetValidStringAll_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanBeEnglish;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeWhiteSpace;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChinese;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeSpace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChineseSymbol;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     validText;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateLobbyRedpointStatus
struct UGlobalUIFunctionLibrary_C_UpdateLobbyRedpointStatus_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModeID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS_Server
struct UGlobalUIFunctionLibrary_C_GetItemTimeS_Server_Params
{
	int                                                expire_ts;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                valid_hours;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     time_s;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               is_have_limit;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS
struct UGlobalUIFunctionLibrary_C_GetItemTimeS_Params
{
	int                                                res_id;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstTimeNum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     time_s;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               is_have_limit;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeNumToTimeS
struct UGlobalUIFunctionLibrary_C_TimeNumToTimeS_Params
{
	int                                                time_num;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     time_s;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsWithItemInfo
struct UGlobalUIFunctionLibrary_C_ShowItemTipsWithItemInfo_Params
{
	class UWidget*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     limitTimeStr;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               hasLimitTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton
struct UGlobalUIFunctionLibrary_C_ShowItemTipsByButton_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showLimitIcon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips
struct UGlobalUIFunctionLibrary_C_CloseItemTips_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByPos
struct UGlobalUIFunctionLibrary_C_ShowItemTipsByPos_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                ColorID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showLimitTimeIcon;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget
struct UGlobalUIFunctionLibrary_C_CreateUAEUserWidget_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton
struct UGlobalUIFunctionLibrary_C_PlaySoundCloseButton_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect
struct UGlobalUIFunctionLibrary_C_ShowEffect_Params
{
	TArray<class UWidget*>                             Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible
struct UGlobalUIFunctionLibrary_C_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton
struct UGlobalUIFunctionLibrary_C_PlaySoundClickButton_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsChinese
struct UGlobalUIFunctionLibrary_C_IsChinese_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport
struct UGlobalUIFunctionLibrary_C_SendBAReport_Params
{
	int                                                ButtonType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsValidChar
struct UGlobalUIFunctionLibrary_C_IsValidChar_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanBeEnglish;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeWhiteSpace;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChinese;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeSpace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChineseSymbol;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsNumber
struct UGlobalUIFunctionLibrary_C_IsNumber_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace
struct UGlobalUIFunctionLibrary_C_IsWhiteSpace_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength
struct UGlobalUIFunctionLibrary_C_GetTextLength_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ChineseSensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible
struct UGlobalUIFunctionLibrary_C_BoolToVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               collapse;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isButton;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidString
struct UGlobalUIFunctionLibrary_C_GetValidString_Params
{
	int                                                maxLength;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanBeEnglish;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeWhiteSpace;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChinese;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChineseSensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeSpace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     validText;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish
struct UGlobalUIFunctionLibrary_C_IsEnglish_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenURL
struct UGlobalUIFunctionLibrary_C_OpenURL_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankName
struct UGlobalUIFunctionLibrary_C_UpdateRankName_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankIcon
struct UGlobalUIFunctionLibrary_C_UpdateRankIcon_Params
{
	class UImage*                                      imageObj;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData
struct UGlobalUIFunctionLibrary_C_GetGlobalData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Abp_global_C*                                globalObj;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunction
struct UGlobalUIFunctionLibrary_C_InvoleBpFunction_Params
{
	struct FString                                     bp_name;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     func_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString
struct UGlobalUIFunctionLibrary_C_GetLocalizeString_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     string1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     string2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     string3;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TextValue;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalUIEventDispatcher
struct UGlobalUIFunctionLibrary_C_GetGlobalUIEventDispatcher_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGlobalUIEventDispatcher_BP_C*               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

