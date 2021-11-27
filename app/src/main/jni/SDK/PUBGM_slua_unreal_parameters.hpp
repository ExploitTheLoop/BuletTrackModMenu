#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_slua_unreal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function slua_unreal.LuaActor.UnRegistLuaTick
struct ALuaActor_UnRegistLuaTick_Params
{
};

// Function slua_unreal.LuaActor.RegistLuaTick
struct ALuaActor_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaInstancedActorComponent.UnRegistLuaTick
struct ULuaInstancedActorComponent_UnRegistLuaTick_Params
{
};

// Function slua_unreal.LuaInstancedActorComponent.RegistLuaTick
struct ULuaInstancedActorComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaActorComponent.UnRegistLuaTick
struct ULuaActorComponent_UnRegistLuaTick_Params
{
};

// Function slua_unreal.LuaActorComponent.RegistLuaTick
struct ULuaActorComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LatentDelegate.OnLatentCallback
struct ULatentDelegate_OnLatentCallback_Params
{
	int                                                threadRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function slua_unreal.LuaDelegate.EventTrigger
struct ULuaDelegate_EventTrigger_Params
{
};

// Function slua_unreal.LuaOverrider.TriggerAnimNotify
struct ULuaOverrider_TriggerAnimNotify_Params
{
};

// Function slua_unreal.LuaOverriderInterface.GetLuaFilePath
struct ULuaOverriderInterface_GetLuaFilePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

