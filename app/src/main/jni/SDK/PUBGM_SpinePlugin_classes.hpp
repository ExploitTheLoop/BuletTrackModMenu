#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_SpinePlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SpinePlugin.SpineAtlasAsset
// 0x0024 (0x0040 - 0x001C)
class USpineAtlasAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	struct FString                                     rawData;                                                  // 0x002C(0x000C) (ZeroConstructor)
	struct FName                                       atlasFileName;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineAtlasAsset");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineBoneDriverComponent
// 0x0020 (0x0290 - 0x0270)
class USpineBoneDriverComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneName;                                                 // 0x0274(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseComponentTransform;                                    // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePosition;                                              // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotation;                                              // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseScale;                                                 // 0x0283(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0284(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneDriverComponent");
		return pStaticClass;
	}


	void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);
};


// Class SpinePlugin.SpineBoneFollowerComponent
// 0x0020 (0x0290 - 0x0270)
class USpineBoneFollowerComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneName;                                                 // 0x0274(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseComponentTransform;                                    // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePosition;                                              // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotation;                                              // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseScale;                                                 // 0x0283(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0284(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneFollowerComponent");
		return pStaticClass;
	}

};


// Class SpinePlugin.TrackEntry
// 0x004C (0x0068 - 0x001C)
class UTrackEntry : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x004C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.TrackEntry");
		return pStaticClass;
	}


	void SetTrackTime(float trackTime);
	void SetTrackEnd(float trackEnd);
	void SetTimeScale(float TimeScale);
	void SetMixTime(float mixTime);
	void SetMixDuration(float mixDuration);
	void SetLoop(bool Loop);
	void SetEventThreshold(float eventThreshold);
	void SetDrawOrderThreshold(float drawOrderThreshold);
	void SetDelay(float Delay);
	void SetAttachmentThreshold(float attachmentThreshold);
	void SetAnimationStart(float animationStart);
	void SetAnimationLast(float animationLast);
	void SetAnimationEnd(float animationEnd);
	void SetAlpha(float Alpha);
	float isValidAnimation();
	float GetTrackTime();
	int GetTrackIndex();
	float GetTrackEnd();
	float GetTimeScale();
	float GetMixTime();
	float GetMixDuration();
	bool GetLoop();
	float GetEventThreshold();
	float GetDrawOrderThreshold();
	float GetDelay();
	float GetAttachmentThreshold();
	float GetAnimationStart();
	struct FString getAnimationName();
	float GetAnimationLast();
	float GetAnimationEnd();
	float getAnimationDuration();
	float GetAlpha();
};


// Class SpinePlugin.SpineSkeletonComponent
// 0x0030 (0x00F8 - 0x00C8)
class USpineSkeletonComponent : public UActorComponent
{
public:
	class USpineAtlasAsset*                            Atlas;                                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpineSkeletonDataAsset*                     SkeletonData;                                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               // 0x00D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                // 0x00DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonComponent");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void SetToSetupPose();
	void SetSlotsToSetupPose();
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetBoneWorldPosition(const struct FString& BoneName, const struct FVector& Position);
	void SetBonesToSetupPose();
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	struct FTransform GetBoneWorldTransform(const struct FString& BoneName);
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
};


// Class SpinePlugin.SpineSkeletonAnimationComponent
// 0x00C0 (0x01B8 - 0x00F8)
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{
public:
	struct FScriptMulticastDelegate                    animationStart;                                           // 0x00F8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x0104(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0110(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x011C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x0128(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x0134(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     PreviewAnimation;                                         // 0x0140(0x000C) (Edit, ZeroConstructor)
	struct FString                                     PreviewSkin;                                              // 0x014C(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0158(0x003C) UNKNOWN PROPERTY: SetProperty SpinePlugin.SpineSkeletonAnimationComponent.trackEntries
	bool                                               bAutoPlaying;                                             // 0x0198(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0199(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonAnimationComponent");
		return pStaticClass;
	}


	void SetTimeScale(float TimeScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetAutoPlay(bool bInAutoPlays);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	float GetTimeScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};


// Class SpinePlugin.SpineSkeletonDataAsset
// 0x0074 (0x0090 - 0x001C)
class USpineSkeletonDataAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FSpineAnimationStateMixData>         MixData;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Bones;                                                    // 0x002C(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Slots;                                                    // 0x0038(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Skins;                                                    // 0x0044(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Animations;                                               // 0x0050(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Events;                                                   // 0x005C(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<unsigned char>                              rawData;                                                  // 0x0068(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       skeletonDataFileName;                                     // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonDataAsset");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineSkeletonRendererComponent
// 0x0250 (0x0860 - 0x0610)
class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{
public:
	class UMaterialInterface*                          NormalBlendMaterial;                                      // 0x0610(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    // 0x0614(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ScreenBlendMaterial;                                      // 0x061C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                // 0x0620(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x062C(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              // 0x0668(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0674(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              // 0x06B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x06BC(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                // 0x06F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x0704(0x003C) MISSED OFFSET
	float                                              DepthOffset;                                              // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	struct FName                                       TextureParameterName;                                     // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0750(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bCreateCollision;                                         // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xFF];                                      // 0x0761(0x00FF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonRendererComponent");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineWidget
// 0x03A8 (0x0478 - 0x00D0)
class USpineWidget : public UWidget
{
public:
	class USpineAtlasAsset*                            Atlas;                                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpineSkeletonDataAsset*                     SkeletonData;                                             // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NormalBlendMaterial;                                      // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ScreenBlendMaterial;                                      // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameterName;                                     // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOffset;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x00F4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0108(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               // 0x01A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                // 0x01AC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationStart;                                           // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x01C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x01D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x01DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x01E8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x01F4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0200(0x001C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                // 0x021C(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0228(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              // 0x0264(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x0270(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              // 0x02AC(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x02B8(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                // 0x02F4(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x134];                                     // 0x0300(0x0134) MISSED OFFSET
	unsigned char                                      UnknownData06[0x3C];                                      // 0x0300(0x003C) UNKNOWN PROPERTY: SetProperty SpinePlugin.SpineWidget.trackEntries
	bool                                               bAutoPlaying;                                             // 0x0470(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0471(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class SpinePlugin.SpineWidget");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void Tick(float DeltaTime, bool CallDelegates);
	void SetToSetupPose();
	void SetTimeScale(float TimeScale);
	void SetSlotsToSetupPose();
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetScale(float inScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetColor(const struct FLinearColor& InColor);
	void SetBonesToSetupPose();
	void SetAutoPlay(bool bInAutoPlays);
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	float GetTimeScale();
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	float GetScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	struct FLinearColor GetColor();
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};


}

