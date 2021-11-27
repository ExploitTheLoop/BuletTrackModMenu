#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAESharedModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAESharedModule.OwnBlackboardInterface
// 0x0000 (0x0020 - 0x0020)
class UOwnBlackboardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAESharedModule.OwnBlackboardInterface");
		return pStaticClass;
	}


	TArray<struct FUAEBlackboardParameter> GetOwnBlackboardParameter();
	class UUAEBlackboard* GetOwnBlackboard();
};


// Class UAESharedModule.UAEBlackboardBlueprintFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UUAEBlackboardBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAESharedModule.UAEBlackboardBlueprintFunctionLibrary");
		return pStaticClass;
	}


	static void SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static bool IsExistWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool IsExistBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static class UObject* GetValueAsWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static class AActor* GetValueAsWeakActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static struct FVector GetValueAsVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static struct FString GetValueAsString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static struct FRotator GetValueAsRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static class UObject* GetValueAsObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static struct FName GetValueAsName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static int GetValueAsInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static float GetValueAsFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static unsigned char GetValueAsEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static class UClass* GetValueAsClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static bool GetValueAsBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static class AActor* GetValueAsActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key);
	static void FillBlackboard(TArray<struct FUAEBlackboardParameter> ParamList, struct FUAEBlackboardContainer* UAEBlackboardContainer);
	static void AddValueByParam(const struct FUAEBlackboardParameter& NewParam, struct FUAEBlackboardContainer* UAEBlackboardContainer);
};


// Class UAESharedModule.UAEBlackboard
// 0x02D4 (0x02F0 - 0x001C)
class UUAEBlackboard : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2D4];                                     // 0x001C(0x02D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAESharedModule.UAEBlackboard");
		return pStaticClass;
	}


	void SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsObject(const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsActor(const struct FUAEBlackboardKeySelector& Key);
	void AddValueByParam(const struct FUAEBlackboardParameter& NewParam);
};


// Class UAESharedModule.UAESharedModuleInterface
// 0x0000 (0x0020 - 0x0020)
class UUAESharedModuleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAESharedModule.UAESharedModuleInterface");
		return pStaticClass;
	}

};


}

