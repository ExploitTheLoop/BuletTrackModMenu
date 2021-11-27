#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UIParticle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UIParticle.UIParticle
// 0x0018 (0x00E8 - 0x00D0)
class UUIParticle : public UWidget
{
public:
	struct FScriptMulticastDelegate                    EventOnEnd;                                               // 0x00D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bPlayParticle : 1;                                        // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsPlaying;                                                // 0x00DD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x00DE(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UIParticle.UIParticle");
		return pStaticClass;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};


// Class UIParticle.UIParticleAsset
// 0x000C (0x0028 - 0x001C)
class UUIParticleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UIParticle.UIParticleAsset");
		return pStaticClass;
	}

};


// Class UIParticle.UIParticleEmitter
// 0x0018 (0x00E8 - 0x00D0)
class UUIParticleEmitter : public UWidget
{
public:
	struct FScriptMulticastDelegate                    EventOnEnd;                                               // 0x00D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bPlayParticle : 1;                                        // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsPlaying;                                                // 0x00DD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x00DE(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UIParticle.UIParticleEmitter");
		return pStaticClass;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};


// Class UIParticle.UIParticleEmitterAsset
// 0x8D4C (0x8D68 - 0x001C)
class UUIParticleEmitterAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              EmitSeconds;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FUIParticleProperty                         MaxParticleCount;                                         // 0x0024(0x0538) (Edit)
	struct FUIParticleProperty                         SpawnParticlePerSecond;                                   // 0x055C(0x0538) (Edit)
	struct FUIParticleProperty                         ParticleEmitAngle;                                        // 0x0A94(0x0538) (Edit)
	struct FRange_Vector2D                             EmitPosRange;                                             // 0x0FCC(0x0014) (Edit)
	struct FPosotion_Vector2DCurve                     EmitPosition;                                             // 0x0FE0(0x0A70) (Edit)
	bool                                               AutoEmitPosRange;                                         // 0x1A50(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoScale;                                                // 0x1A51(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleByX;                                                 // 0x1A52(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x1A53(0x0001) MISSED OFFSET
	struct FVector2D                                   DesignSize;                                               // 0x1A54(0x0008) (Edit, IsPlainOldData)
	EPositionType                                      PositionType;                                             // 0x1A5C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1A5D(0x0003) MISSED OFFSET
	struct FUIParticleProperty                         LifeSpan;                                                 // 0x1A60(0x0538) (Edit)
	struct FUIParticleProperty                         Size;                                                     // 0x1F98(0x0538) (Edit)
	struct FUIParticleProperty                         Pivot;                                                    // 0x24D0(0x0538) (Edit)
	struct FUIParticleProperty                         RotationStart;                                            // 0x2A08(0x0538) (Edit)
	struct FUIParticleProperty                         RotationSpeed;                                            // 0x2F40(0x0538) (Edit)
	struct FUIParticleProperty                         Color;                                                    // 0x3478(0x0538) (Edit)
	class UObject*                                     ResourceObject;                                           // 0x39B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RotationFollowSpeed;                                      // 0x39B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSeparateSize;                                          // 0x39B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x39B6(0x0002) MISSED OFFSET
	struct FUIParticleProperty                         Gravity;                                                  // 0x39B8(0x0538) (Edit)
	struct FUIParticleProperty                         StartSpeed;                                               // 0x3EF0(0x0538) (Edit)
	struct FUIParticleProperty                         AirResistance;                                            // 0x4428(0x0538) (Edit)
	struct FUIParticleProperty                         RadialAcceleration;                                       // 0x4960(0x0538) (Edit)
	struct FUIParticleProperty                         TangentialAcceleration;                                   // 0x4E98(0x0538) (Edit)
	struct FUIParticleProperty                         Radius;                                                   // 0x53D0(0x0538) (Edit)
	struct FUIParticleProperty                         DegreePerSecond;                                          // 0x5908(0x0538) (Edit)
	struct FUIParticleProperty                         PositionX;                                                // 0x5E40(0x0538) (Edit)
	struct FUIParticleProperty                         PositionY;                                                // 0x6378(0x0538) (Edit)
	TArray<struct FChildEmitter>                       ChildrenEmitters;                                         // 0x68B0(0x000C) (Edit, ZeroConstructor)
	TArray<struct FScalarParamCurve>                   ScalarParams;                                             // 0x68BC(0x000C) (Edit, ZeroConstructor)
	TArray<struct FScalarParamCurve>                   ScalarParamsWhenStart;                                    // 0x68C8(0x000C) (Edit, ZeroConstructor)
	EParticleDrawEffect                                DrawEffect;                                               // 0x68D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseScaleFollowSpeedDirection;                             // 0x68D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x68D6(0x0002) MISSED OFFSET
	struct FUIParticleProperty                         ScaleFollowSpeedDirection;                                // 0x68D8(0x0538) (Edit)
	bool                                               UseScaleFollowSpeedVertical;                              // 0x6E10(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x6E11(0x0003) MISSED OFFSET
	struct FUIParticleProperty                         ScaleFollowSpeedVertical;                                 // 0x6E14(0x0538) (Edit)
	struct FUIParticleProperty                         DirectionScale;                                           // 0x734C(0x0538) (Edit)
	struct FUIParticleProperty                         VerticalDirectionScale;                                   // 0x7884(0x0538) (Edit)
	struct FUIParticleProperty                         SineDirectionStart;                                       // 0x7DBC(0x0538) (Edit)
	struct FUIParticleProperty                         SineDirectionSpeed;                                       // 0x82F4(0x0538) (Edit)
	struct FUIParticleProperty                         SineDirectionRange;                                       // 0x882C(0x0538) (Edit)
	unsigned char                                      UnknownData06[0x4];                                       // 0x8D64(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UIParticle.UIParticleEmitterAsset");
		return pStaticClass;
	}

};


}

