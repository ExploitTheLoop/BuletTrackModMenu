#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UIParticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UIParticle.UIParticle.StopEmit
struct UUIParticle_StopEmit_Params
{
};

// Function UIParticle.UIParticle.Stop
struct UUIParticle_Stop_Params
{
};

// Function UIParticle.UIParticle.SetPlayParticle
struct UUIParticle_SetPlayParticle_Params
{
	bool                                               InPlayParticle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticle.UIParticle.Play
struct UUIParticle_Play_Params
{
};

// Function UIParticle.UIParticleEmitter.StopEmit
struct UUIParticleEmitter_StopEmit_Params
{
};

// Function UIParticle.UIParticleEmitter.Stop
struct UUIParticleEmitter_Stop_Params
{
};

// Function UIParticle.UIParticleEmitter.SetPlayParticle
struct UUIParticleEmitter_SetPlayParticle_Params
{
	bool                                               InPlayParticle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIParticle.UIParticleEmitter.Play
struct UUIParticleEmitter_Play_Params
{
};

}

