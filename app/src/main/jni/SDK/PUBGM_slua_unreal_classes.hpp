#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_slua_unreal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class slua_unreal.LuaActor
// 0x0090 (0x0370 - 0x02E0)
class ALuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02E0(0x0040) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0320(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x035C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaGameMode
// 0x0050 (0x03B8 - 0x0368)
class ALuaGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0368(0x0044) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameMode");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaGameState
// 0x0090 (0x03C0 - 0x0330)
class ALuaGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0330(0x0044) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0374(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x03B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaPlayerState
// 0x0090 (0x03D0 - 0x0340)
class ALuaPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0340(0x0044) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0384(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x03C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerState");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaInstancedActorComponent
// 0x0058 (0x0120 - 0x00C8)
class ULuaInstancedActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0110(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaInstancedActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaActorComponent
// 0x0090 (0x0158 - 0x00C8)
class ULuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x00C8(0x0044) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x010C(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0148(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};


// Class slua_unreal.LuaPlayerController
// 0x0090 (0x0610 - 0x0580)
class ALuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0580(0x0044) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x05C4(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0600(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x060C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerController");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaObject
// 0x0054 (0x0070 - 0x001C)
class ULuaObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x001C(0x0048) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0064(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaObject");
		return pStaticClass;
	}

};


// Class slua_unreal.LatentDelegate
// 0x0004 (0x0020 - 0x001C)
class ULatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LatentDelegate");
		return pStaticClass;
	}


	void OnLatentCallback(int threadRef);
};


// Class slua_unreal.LuaDelegate
// 0x000C (0x0028 - 0x001C)
class ULuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class slua_unreal.LuaLevelScriptActor
// 0x0050 (0x0330 - 0x02E0)
class ALuaLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x02E0(0x0044) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0324(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaLevelScriptActor");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaOverrider
// 0x0004 (0x0020 - 0x001C)
class ULuaOverrider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverrider");
		return pStaticClass;
	}


	void TriggerAnimNotify();
};


// Class slua_unreal.InstancedLuaInterface
// 0x0000 (0x0020 - 0x0020)
class UInstancedLuaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.InstancedLuaInterface");
		return pStaticClass;
	}

};


// Class slua_unreal.LuaOverriderInterface
// 0x0000 (0x0020 - 0x0020)
class ULuaOverriderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverriderInterface");
		return pStaticClass;
	}


	struct FString GetLuaFilePath();
};


// Class slua_unreal.LuaUserWidget
// 0x0050 (0x0208 - 0x01B8)
class ULuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x01B8(0x0044) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x01FC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class slua_unreal.LuaUserWidget");
		return pStaticClass;
	}

};


}

