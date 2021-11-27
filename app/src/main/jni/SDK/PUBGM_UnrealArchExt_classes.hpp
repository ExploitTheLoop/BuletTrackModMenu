#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UnrealArchExt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UnrealArchExt.UAEUserWidget
// 0x0150 (0x0308 - 0x01B8)
class UUAEUserWidget : public UUserWidget
{
public:
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x01B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class ULogicManagerBase*                           OwningLogicManager;                                       // 0x01BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UUAEWidgetContainer*                         OwningWidgetContainer;                                    // 0x01C0(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUAEUserWidget*                              ParentWidget;                                             // 0x01C4(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x01C8(0x0078) MISSED OFFSET
	TArray<class UProperty*>                           Params;                                                   // 0x0240(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x024C(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    widgetSizeNofity;                                         // 0x0254(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FUserWidgetState                            DefaultUserWidgetState;                                   // 0x0260(0x0020) (Edit)
	struct FUserWidgetState                            CurrentUserWidgetState;                                   // 0x0280(0x0020) (BlueprintVisible)
	float                                              TickRate;                                                 // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bReceiveOnClickedEvent;                                   // 0x02A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnRightClickedEvent;                              // 0x02A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnDoubleClickedEvent;                             // 0x02A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSetScreenPosOnMouseEnter;                            // 0x02A7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPos;                                                // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   LastMouseEventScreenPos;                                  // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	EUserWidgetFadingStatus                            FadingStatus;                                             // 0x02C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	float                                              CurrentOpacity;                                           // 0x02C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadingInTime;                                             // 0x02C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadingOutTime;                                            // 0x02CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeIn;                                                // 0x02D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeOut;                                               // 0x02D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldCollapse;                                          // 0x02D2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegistUIMsg;                                             // 0x02D3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     UIMsgPrefix;                                              // 0x02D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             UIMsgFunctionList;                                        // 0x02E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRegistedUIMsgToMoudle;                                   // 0x02EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FString                                     MoudleToRegisted;                                         // 0x02F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0xC];                                       // 0x02FC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEUserWidget");
		return pStaticClass;
	}


	bool Visible();
	void UnRegistFromGameFrontendHUD();
	void SynchronizeBlueprintProperties();
	void Show();
	void SetParentWidgetRecursive(class UUAEUserWidget* InParentWidget);
	void SetParentWidget(class UUAEUserWidget* InParentWidget);
	static void SetOnWidgetShow(const struct FScriptDelegate& onShow);
	static void SetOnWidgetHide(const struct FScriptDelegate& OnHide);
	static void SetOnClearUIStack(const struct FScriptDelegate& onClear);
	void SetAdapation(float Left, float Top, float Right, float Bottom);
	void RegistToGameFrontendHUD(class UFrontendHUD* GameFrontHUD);
	void Register(class ULogicManagerBase* LogicManager, bool bAddToViewport);
	void ReceiveShow();
	void ReceiveHide();
	void ReceivedMountWidget();
	void ReceivedInitWidget();
	void ReCachedUIMsgFunction();
	static void PushOpenedUIStack(const struct FString& Name);
	static void PopOpenedUIStack(const struct FString& curOpen);
	void OnWidgetShow__DelegateSignature(const struct FString& ClassName);
	void OnWidgetHide__DelegateSignature(const struct FString& ClassName);
	void OnRightClicked(const struct FVector2D& TempScreenPos);
	void OnFadeOutFinished();
	void OnFadeInFinished();
	void OnDoubleClicked(const struct FVector2D& TempScreenPos);
	void OnClicked(const struct FVector2D& TempScreenPos);
	void OnClearUIStack__DelegateSignature();
	bool IntCompare(int A, int B, EWidgetCompareType CompareType);
	void InitWidget(bool Recursive);
	void InitCustomWidget(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent);
	void Hide();
	void HandleUIMessageBattle(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	class UWidget* GetWidgetsByName(const struct FString& WidgetName, const struct FString& OuterName, bool bUseContains);
	class UWidget* GetWidgetContainsName(const struct FString& Name);
	class UUAEUserWidget* GetParentWidget();
	class APlayerController* GetOwningPlayer();
	class ULogicManagerBase* GetOwningLogicManager();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UMaterialInstanceDynamic* GetImgDynamicMaterial(class UImage* ImageMat);
	class UUserWidget* GetChildWidgetByEqualPolitics(const struct FString& ChildName, EUserWidgetNameEqualPolitics EqualPolitics, int RecursiveDepth);
	class UUserWidget* GetChildWidget(const struct FString& WName);
	struct FMargin GetAdapation();
	bool FloatCompare(float A, float B, EWidgetCompareType CompareType);
	void DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget);
	void DestroyWidget();
	static void ClearOpenedUIStack();
	void ClearFunctionCacheByMsgName(const struct FString& InUIMsg);
	void ClearFunctionCache();
	void ClearClassWidgetTree();
	void BindCustomUserEvent(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent);
};


// Class UnrealArchExt.TableTraver
// 0x0004 (0x0020 - 0x001C)
class UTableTraver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.TableTraver");
		return pStaticClass;
	}

};


// Class UnrealArchExt.LuaUAEUserWidget
// 0x0050 (0x0358 - 0x0308)
class ULuaUAEUserWidget : public UUAEUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0308(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0348(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEnableBlueprintTick;                                     // 0x0354(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.LuaUAEUserWidget");
		return pStaticClass;
	}

};


// Class UnrealArchExt.UAECanvasPanel
// 0x0000 (0x00E8 - 0x00E8)
class UUAECanvasPanel : public UCanvasPanel
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.UAECanvasPanel");
		return pStaticClass;
	}


	void ReceiveInitCanvasPanel();
};


// Class UnrealArchExt.BackendUtils
// 0x0004 (0x0020 - 0x001C)
class UBackendUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendUtils");
		return pStaticClass;
	}

};


// Class UnrealArchExt.BackendHUD
// 0x0064 (0x0080 - 0x001C)
class UBackendHUD : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     BackendUtilsClassName;                                    // 0x0020(0x000C) (ZeroConstructor, Config)
	class UBackendUtils*                               Utils;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UFrontendHUD*>                        FrontendHUDList;                                          // 0x0030(0x000C) (ZeroConstructor)
	TMap<uint32_t, TWeakObjectPtr<class UFrontendHUD>> FrontendHUDMap;                                           // 0x003C(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendHUD");
		return pStaticClass;
	}


	class UFrontendHUD* GetFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UFrontendHUD* GetFrontendHUD(int FrontendHUDIndex);
};


// Class UnrealArchExt.LogicManagerBase
// 0x0094 (0x00B0 - 0x001C)
class ULogicManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x002C(0x0008) MISSED OFFSET
	bool                                               bPersistentUI;                                            // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicWidget;                                           // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bKeepDynamicWidget;                                       // 0x0036(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewHandleUIMessage;                                   // 0x0037(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                iUIControlState;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DefaultSceneCameraIndex;                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0040(0x000C) MISSED OFFSET
	TArray<struct FName>                               GameStatusList;                                           // 0x004C(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x24];                                      // 0x0058(0x0024) MISSED OFFSET
	TArray<class UClass*>                              WidgetUClassList;                                         // 0x007C(0x000C) (ZeroConstructor)
	TArray<class UUAEUserWidget*>                      WidgetList;                                               // 0x0088(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0094(0x0010) MISSED OFFSET
	TArray<class UObject*>                             DelayMessage_Obj;                                         // 0x00A4(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.LogicManagerBase");
		return pStaticClass;
	}


	void SetEnableRemoveDynamicWidgets(bool bEnable);
	bool IsEnableRemoveDynamicWidgets();
	TArray<class UUAEUserWidget*> GetWidgetList();
	class UUAEUserWidget* GetWidgetByName(const struct FString& InName);
	class UUAEUserWidget* GetWidgetByClass(class UClass* InClass);
	class UFrontendHUD* GetOwningFrontendHUD();
	int GetDefaultSceneCamera();
	void DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target);
};


// Class UnrealArchExt.FrontendHUD
// 0x0144 (0x0160 - 0x001C)
class UFrontendHUD : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	class UGameInstance*                               GameInstance;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	struct FString                                     FrontendUtilsClassName;                                   // 0x0034(0x000C) (ZeroConstructor, Config)
	class UFrontendUtils*                              Utils;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class ULogicManagerBase*>                   LogicManagerList;                                         // 0x0044(0x000C) (ZeroConstructor)
	TMap<struct FString, TWeakObjectPtr<class ULogicManagerBase>> LogicManagerMap;                                          // 0x0050(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xC];                                       // 0x008C(0x000C) MISSED OFFSET
	int                                                UnusedWidgetMinCount;                                     // 0x0098(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                UnusedWidgetMaxCount;                                     // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                UnusedWidgetKeepTime;                                     // 0x00A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxLowLevelMemoryLimit;                                   // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxMiddleMemoryLimit;                                     // 0x00A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxGCArrayObjectSize;                                     // 0x00AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       CurrentGameStatus;                                        // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       LastGameStatus;                                           // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               InComBatStatus;                                           // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FName                                       PendingGameStatus;                                        // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     LatestGameStatusURL;                                      // 0x00D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnPostSwitchGameStatusStartEvent;                         // 0x00DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostSwitchGameStatusEvent;                              // 0x00E8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreSwitchGameStatusEvent;                               // 0x00F4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0100(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameStatusSwitchTerminate;                              // 0x010C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreSwitchGameStatusEndEvent;                            // 0x0118(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateLogicManagerListEvent;                            // 0x0124(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetGameStatusEvent;                                     // 0x0130(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddLuaLogicManagerEvent;                                // 0x013C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveLuaLogicManagerEvent;                             // 0x0148(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWorld*                                      CurrentGameStatusWorld;                                   // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendHUD");
		return pStaticClass;
	}


	void SwitchGameStatus(const struct FName& GameStatus, const struct FString& Options);
	void StandAloneSwitchGameStatus(const struct FName& InGameStatus, const struct FString& Options);
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnGameViewportClientCreated();
	class UWorld* GetWorld();
	class UFrontendUtils* GetUtils();
	class APlayerController* GetPlayerController();
	class ULogicManagerBase* GetLogicManagerByName(const struct FString& LogicManagerTagName);
	class ULogicManagerBase* GetLogicManager(int LogicManagerIndex);
	class UGameViewportClient* GetGameViewportClient();
	class AGameMode* GetGameMode();
	class UGameInstance* GetGameInstance();
	TArray<TWeakObjectPtr<class UObject>> FindRegistedUIFunctionList(const struct FString& strMsg, const struct FString& moduleMsg);
	void EnableGuiTest(bool bEnable);
	void DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget, const struct FString& module);
	void ClearLogicManagerByName(const struct FString& managerName);
};


// Class UnrealArchExt.FrontendUtils
// 0x02A4 (0x02C0 - 0x001C)
class UFrontendUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    SceneCameraSwitchedDelegate;                              // 0x0020(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       CurrentSceneCameraName;                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class ACameraActor*>                        SceneCameraList;                                          // 0x0038(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ACameraActor>> SceneCameraMap;                                           // 0x0044(0x0050) (ZeroConstructor)
	TArray<class ADirectionalLight*>                   SceneDirectionalLightList;                                // 0x0080(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ADirectionalLight>> SceneDirectionalLightMap;                                 // 0x008C(0x0050) (ZeroConstructor)
	TArray<class APointLight*>                         ScenePointLightList;                                      // 0x00C8(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class APointLight>> ScenePointLightMap;                                       // 0x00D4(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ASkyLight>> SceneSkyLightMap;                                         // 0x0110(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x5C];                                      // 0x014C(0x005C) MISSED OFFSET
	struct FString                                     GlobalUIEventDispatcherClassName;                         // 0x01A8(0x000C) (ZeroConstructor, Config)
	class UClass*                                      GlobalUIEventDispatcherClass;                             // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     GlobalUIEventDispatcher;                                  // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GlobalUIContainerClassName;                               // 0x01BC(0x000C) (ZeroConstructor, Config)
	TArray<struct FName>                               GlobalUIContainerNames;                                   // 0x01C8(0x000C) (ZeroConstructor, Config)
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalUIContainers;                                       // 0x01D4(0x0050) (ExportObject, ZeroConstructor)
	TArray<class UUAEWidgetContainer*>                 GlobalPushUIContainers;                                   // 0x0210(0x000C) (ExportObject, ZeroConstructor)
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalPushUIRelations;                                    // 0x021C(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0258(0x0028) MISSED OFFSET
	TMap<class UUAEWidgetContainer*, bool>             UIShowStatusMap;                                          // 0x0280(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendUtils");
		return pStaticClass;
	}


	void SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<enum ECameraProjectionMode> ProjectionMode, float FOV, float blendTime, bool bForce);
	void SwitchSceneCamera(const struct FName& SceneCameraName, float blendTime, bool bForce);
	void SetSceneSkyLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color);
	void SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius);
	void SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel);
	void RegisterSceneSkyLight(const struct FName& sceneLightName, class ASkyLight* Light);
	void RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light);
	void RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light);
	void RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera);
	void PopAllPushedUI();
	void OnAllSceneCamerasRegistered();
	bool IsPushedPanel(const struct FName& managerName);
	bool IsNoRenderClient();
	bool GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum);
	struct FString GetUIStackTopSrcTag();
	struct FString GetUIStackTopDstTag();
	struct FString GetUIStackTop();
	class ACameraActor* GetSceneCamera();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UObject* GetGlobalUIEventDispatcher();
	class UUAEWidgetContainer* GetGlobalUIContainer(const struct FName& ContainerName);
	void EnableLobbyMainLight(bool NewEnable);
	void ClearAllSceneCameras();
};


// Class UnrealArchExt.UAEDataTable
// 0x0060 (0x00C0 - 0x0060)
class UUAEDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0060(0x001C) MISSED OFFSET
	TMap<struct FString, class UProperty*>             NameToProperty;                                           // 0x007C(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEDataTable");
		return pStaticClass;
	}


	bool SetTableData_String(const struct FString& KeyValue, const struct FString& TagName, const struct FString& Value);
	bool SetTableData_Int32(const struct FString& KeyValue, const struct FString& TagName, int Value);
	bool SetTableData_Float(const struct FString& KeyValue, const struct FString& TagName, float Value);
	struct FString GetTableName();
	struct FString GetRealTableName(const struct FString& tableName);
	bool ConditionAddEmptyRow(const struct FName& RowName);
};


// Class UnrealArchExt.UAEDataTableInterface
// 0x0000 (0x0020 - 0x0020)
class UUAEDataTableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEDataTableInterface");
		return pStaticClass;
	}

};


// Class UnrealArchExt.UAEWidgetContainer
// 0x0008 (0x0310 - 0x0308)
class UUAEWidgetContainer : public UUAEUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEWidgetContainer");
		return pStaticClass;
	}


	void RemoveWidgetInternal(class UUserWidget* Widget);
	void RemoveWidget(class UUserWidget* Widget);
	void AddWidgetWithZOrderInternal(class UUserWidget* Widget, int ZOrder);
	void AddWidgetWithZOrder(class UUserWidget* Widget, int ZOrder);
	void AddWidgetInternal(class UUserWidget* Widget);
	void AddWidget(class UUserWidget* Widget);
};


}

