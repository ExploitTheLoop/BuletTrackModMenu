#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SpinePlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
struct USpineBoneDriverComponent_BeforeUpdateWorldTransform_Params
{
	class USpineSkeletonComponent*                     Skeleton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetTrackTime
struct UTrackEntry_SetTrackTime_Params
{
	float                                              trackTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetTrackEnd
struct UTrackEntry_SetTrackEnd_Params
{
	float                                              trackEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetTimeScale
struct UTrackEntry_SetTimeScale_Params
{
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetMixTime
struct UTrackEntry_SetMixTime_Params
{
	float                                              mixTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetMixDuration
struct UTrackEntry_SetMixDuration_Params
{
	float                                              mixDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetLoop
struct UTrackEntry_SetLoop_Params
{
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetEventThreshold
struct UTrackEntry_SetEventThreshold_Params
{
	float                                              eventThreshold;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
struct UTrackEntry_SetDrawOrderThreshold_Params
{
	float                                              drawOrderThreshold;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetDelay
struct UTrackEntry_SetDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetAttachmentThreshold
struct UTrackEntry_SetAttachmentThreshold_Params
{
	float                                              attachmentThreshold;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetAnimationStart
struct UTrackEntry_SetAnimationStart_Params
{
	float                                              animationStart;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetAnimationLast
struct UTrackEntry_SetAnimationLast_Params
{
	float                                              animationLast;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetAnimationEnd
struct UTrackEntry_SetAnimationEnd_Params
{
	float                                              animationEnd;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.SetAlpha
struct UTrackEntry_SetAlpha_Params
{
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.isValidAnimation
struct UTrackEntry_isValidAnimation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetTrackTime
struct UTrackEntry_GetTrackTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetTrackIndex
struct UTrackEntry_GetTrackIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetTrackEnd
struct UTrackEntry_GetTrackEnd_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetTimeScale
struct UTrackEntry_GetTimeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetMixTime
struct UTrackEntry_GetMixTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetMixDuration
struct UTrackEntry_GetMixDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetLoop
struct UTrackEntry_GetLoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetEventThreshold
struct UTrackEntry_GetEventThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
struct UTrackEntry_GetDrawOrderThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetDelay
struct UTrackEntry_GetDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetAttachmentThreshold
struct UTrackEntry_GetAttachmentThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetAnimationStart
struct UTrackEntry_GetAnimationStart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.getAnimationName
struct UTrackEntry_getAnimationName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SpinePlugin.TrackEntry.GetAnimationLast
struct UTrackEntry_GetAnimationLast_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetAnimationEnd
struct UTrackEntry_GetAnimationEnd_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.getAnimationDuration
struct UTrackEntry_getAnimationDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.TrackEntry.GetAlpha
struct UTrackEntry_GetAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
struct USpineSkeletonComponent_UpdateWorldTransform_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
struct USpineSkeletonComponent_SetToSetupPose_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
struct USpineSkeletonComponent_SetSlotsToSetupPose_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetSkin
struct USpineSkeletonComponent_SetSkin_Params
{
	struct FString                                     SkinName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.SetScaleY
struct USpineSkeletonComponent_SetScaleY_Params
{
	float                                              ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.SetScaleX
struct USpineSkeletonComponent_SetScaleX_Params
{
	float                                              ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
struct USpineSkeletonComponent_SetBoneWorldPosition_Params
{
	struct FString                                     BoneName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
struct USpineSkeletonComponent_SetBonesToSetupPose_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetAttachment
struct USpineSkeletonComponent_SetAttachment_Params
{
	struct FString                                     SlotName;                                                 // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     AttachmentName;                                           // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.HasSlot
struct USpineSkeletonComponent_HasSlot_Params
{
	struct FString                                     SlotName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.HasSkin
struct USpineSkeletonComponent_HasSkin_Params
{
	struct FString                                     SkinName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.HasBone
struct USpineSkeletonComponent_HasBone_Params
{
	struct FString                                     BoneName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.HasAnimation
struct USpineSkeletonComponent_HasAnimation_Params
{
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.GetSlots
struct USpineSkeletonComponent_GetSlots_Params
{
	TArray<struct FString>                             Slots;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineSkeletonComponent.GetSkins
struct USpineSkeletonComponent_GetSkins_Params
{
	TArray<struct FString>                             Skins;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineSkeletonComponent.GetScaleY
struct USpineSkeletonComponent_GetScaleY_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.GetScaleX
struct USpineSkeletonComponent_GetScaleX_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
struct USpineSkeletonComponent_GetBoneWorldTransform_Params
{
	struct FString                                     BoneName;                                                 // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonComponent.GetBones
struct USpineSkeletonComponent_GetBones_Params
{
	TArray<struct FString>                             Bones;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineSkeletonComponent.GetAnimations
struct USpineSkeletonComponent_GetAnimations_Params
{
	TArray<struct FString>                             Animations;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration
struct USpineSkeletonComponent_getAnimationDuration_Params
{
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
struct USpineSkeletonAnimationComponent_SetTimeScale_Params
{
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
struct USpineSkeletonAnimationComponent_SetPlaybackTime_Params
{
	float                                              InPlaybackTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallDelegates;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
struct USpineSkeletonAnimationComponent_SetEmptyAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              mixDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
struct USpineSkeletonAnimationComponent_SetAutoPlay_Params
{
	bool                                               bInAutoPlays;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
struct USpineSkeletonAnimationComponent_SetAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
struct USpineSkeletonAnimationComponent_GetTimeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
struct USpineSkeletonAnimationComponent_GetCurrent_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
struct USpineSkeletonAnimationComponent_ClearTracks_Params
{
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
struct USpineSkeletonAnimationComponent_ClearTrack_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
struct USpineSkeletonAnimationComponent_AddEmptyAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              mixDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
struct USpineSkeletonAnimationComponent_AddAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.UpdateWorldTransform
struct USpineWidget_UpdateWorldTransform_Params
{
};

// Function SpinePlugin.SpineWidget.Tick
struct USpineWidget_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CallDelegates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetToSetupPose
struct USpineWidget_SetToSetupPose_Params
{
};

// Function SpinePlugin.SpineWidget.SetTimeScale
struct USpineWidget_SetTimeScale_Params
{
	float                                              TimeScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
struct USpineWidget_SetSlotsToSetupPose_Params
{
};

// Function SpinePlugin.SpineWidget.SetSkin
struct USpineWidget_SetSkin_Params
{
	struct FString                                     SkinName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetScaleY
struct USpineWidget_SetScaleY_Params
{
	float                                              ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetScaleX
struct USpineWidget_SetScaleX_Params
{
	float                                              ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetScale
struct USpineWidget_SetScale_Params
{
	float                                              inScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetPlaybackTime
struct USpineWidget_SetPlaybackTime_Params
{
	float                                              InPlaybackTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallDelegates;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetEmptyAnimation
struct USpineWidget_SetEmptyAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              mixDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetColor
struct USpineWidget_SetColor_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetBonesToSetupPose
struct USpineWidget_SetBonesToSetupPose_Params
{
};

// Function SpinePlugin.SpineWidget.SetAutoPlay
struct USpineWidget_SetAutoPlay_Params
{
	bool                                               bInAutoPlays;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetAttachment
struct USpineWidget_SetAttachment_Params
{
	struct FString                                     SlotName;                                                 // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     AttachmentName;                                           // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.SetAnimation
struct USpineWidget_SetAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.HasSlot
struct USpineWidget_HasSlot_Params
{
	struct FString                                     SlotName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.HasSkin
struct USpineWidget_HasSkin_Params
{
	struct FString                                     SkinName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.HasBone
struct USpineWidget_HasBone_Params
{
	struct FString                                     BoneName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.HasAnimation
struct USpineWidget_HasAnimation_Params
{
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.GetTimeScale
struct USpineWidget_GetTimeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.GetSlots
struct USpineWidget_GetSlots_Params
{
	TArray<struct FString>                             Slots;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineWidget.GetSkins
struct USpineWidget_GetSkins_Params
{
	TArray<struct FString>                             Skins;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineWidget.GetScaleY
struct USpineWidget_GetScaleY_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.GetScaleX
struct USpineWidget_GetScaleX_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.GetScale
struct USpineWidget_GetScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.GetCurrent
struct USpineWidget_GetCurrent_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.GetColor
struct USpineWidget_GetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.GetBones
struct USpineWidget_GetBones_Params
{
	TArray<struct FString>                             Bones;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineWidget.GetAnimations
struct USpineWidget_GetAnimations_Params
{
	TArray<struct FString>                             Animations;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function SpinePlugin.SpineWidget.getAnimationDuration
struct USpineWidget_getAnimationDuration_Params
{
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.ClearTracks
struct USpineWidget_ClearTracks_Params
{
};

// Function SpinePlugin.SpineWidget.ClearTrack
struct USpineWidget_ClearTrack_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.AddEmptyAnimation
struct USpineWidget_AddEmptyAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              mixDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpinePlugin.SpineWidget.AddAnimation
struct USpineWidget_AddAnimation_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimationName;                                            // (Parm, ZeroConstructor)
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrackEntry*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

