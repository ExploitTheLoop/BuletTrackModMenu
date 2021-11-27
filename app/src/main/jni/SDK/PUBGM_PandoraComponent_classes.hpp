#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_PandoraComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PandoraComponent.PandoraBpFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UPandoraBpFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraBpFunctionLibrary");
		return pStaticClass;
	}


	static void Tnm2Test(const struct FString& errMsg, int iId, int iType, bool bSend);
	static void SetGameInstance(class UGameInstance* Instance);
	static struct FString OnClickOpenPop();
	static struct FString OnClickInit();
	static struct FString OnClickClose();
	static void LogoutPandora();
	static bool InitPandora(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion);
	static struct FString GetHappyMessage();
};


// Class PandoraComponent.PandoraInterface
// 0x0004 (0x0020 - 0x001C)
class UPandoraInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraInterface");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraRichTextBox
// 0x0278 (0x0348 - 0x00D0)
class UPandoraRichTextBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FScriptDelegate                             TextDelegate;                                             // 0x00D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x00E8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<enum ETextJustify>                     Justification;                                            // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x0154(0x000C) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x1E8];                                     // 0x0160(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraRichTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class PandoraComponent.PandoraSceneComponent
// 0x0000 (0x0270 - 0x0270)
class UPandoraSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraSceneComponent");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraLuaActor
// 0x0040 (0x0320 - 0x02E0)
class APandoraLuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02E0(0x0028) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0308(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0314(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaActor");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaPawn
// 0x0048 (0x0368 - 0x0320)
class APandoraLuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0320(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x034C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0358(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaPawn");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaCharacter
// 0x0050 (0x0640 - 0x05F0)
class APandoraLuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x05F0(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x061C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0628(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0634(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaCharacter");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaController
// 0x0048 (0x0370 - 0x0328)
class APandoraLuaController : public AController
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0328(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0354(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0360(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaController");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaPlayerController
// 0x0048 (0x05C8 - 0x0580)
class APandoraLuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0580(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x05AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x05B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaPlayerController");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaGameModeBase
// 0x0040 (0x0370 - 0x0330)
class APandoraLuaGameModeBase : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0330(0x0028) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0358(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0364(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaGameModeBase");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaHUD
// 0x0048 (0x03C8 - 0x0380)
class APandoraLuaHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0380(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x03B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaHUD");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UPandoraLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static struct FPandoraLuaBPVar CreateVarFromString(const struct FString& Value);
	static struct FPandoraLuaBPVar CreateVarFromObject(class UObject* Value);
	static struct FPandoraLuaBPVar CreateVarFromNumber(float Value);
	static struct FPandoraLuaBPVar CreateVarFromInt(int Value);
	static struct FPandoraLuaBPVar CreateVarFromBool(bool Value);
	static struct FPandoraLuaBPVar CallToLuaWithArgs(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args, const struct FString& StateName);
	static struct FPandoraLuaBPVar CallToLua(const struct FString& FunctionName, const struct FString& StateName);
};


// Class PandoraComponent.PandoraLuaDelegate
// 0x000C (0x0028 - 0x001C)
class UPandoraLuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class PandoraComponent.PandoraLuaUserWidget
// 0x0080 (0x0238 - 0x01B8)
class UPandoraLuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x01B8(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x01E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x01F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x01FC(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaUserWidget");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


}

