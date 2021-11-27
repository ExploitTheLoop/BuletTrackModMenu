#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UnrealArchExt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UnrealArchExt.UAEUserWidget.Visible
struct UUAEUserWidget_Visible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.UnRegistFromGameFrontendHUD
struct UUAEUserWidget_UnRegistFromGameFrontendHUD_Params
{
};

// Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties
struct UUAEUserWidget_SynchronizeBlueprintProperties_Params
{
};

// Function UnrealArchExt.UAEUserWidget.Show
struct UUAEUserWidget_Show_Params
{
};

// Function UnrealArchExt.UAEUserWidget.SetParentWidgetRecursive
struct UUAEUserWidget_SetParentWidgetRecursive_Params
{
	class UUAEUserWidget*                              InParentWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.SetParentWidget
struct UUAEUserWidget_SetParentWidget_Params
{
	class UUAEUserWidget*                              InParentWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.SetOnWidgetShow
struct UUAEUserWidget_SetOnWidgetShow_Params
{
	struct FScriptDelegate                             onShow;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.SetOnWidgetHide
struct UUAEUserWidget_SetOnWidgetHide_Params
{
	struct FScriptDelegate                             OnHide;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.SetOnClearUIStack
struct UUAEUserWidget_SetOnClearUIStack_Params
{
	struct FScriptDelegate                             onClear;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.SetAdapation
struct UUAEUserWidget_SetAdapation_Params
{
	float                                              Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.RegistToGameFrontendHUD
struct UUAEUserWidget_RegistToGameFrontendHUD_Params
{
	class UFrontendHUD*                                GameFrontHUD;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.Register
struct UUAEUserWidget_Register_Params
{
	class ULogicManagerBase*                           LogicManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToViewport;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.ReceiveShow
struct UUAEUserWidget_ReceiveShow_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReceiveHide
struct UUAEUserWidget_ReceiveHide_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReceivedMountWidget
struct UUAEUserWidget_ReceivedMountWidget_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget
struct UUAEUserWidget_ReceivedInitWidget_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReCachedUIMsgFunction
struct UUAEUserWidget_ReCachedUIMsgFunction_Params
{
};

// Function UnrealArchExt.UAEUserWidget.PushOpenedUIStack
struct UUAEUserWidget_PushOpenedUIStack_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.PopOpenedUIStack
struct UUAEUserWidget_PopOpenedUIStack_Params
{
	struct FString                                     curOpen;                                                  // (Parm, ZeroConstructor)
};

// DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetShow__DelegateSignature
struct UUAEUserWidget_OnWidgetShow__DelegateSignature_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
};

// DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetHide__DelegateSignature
struct UUAEUserWidget_OnWidgetHide__DelegateSignature_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.OnRightClicked
struct UUAEUserWidget_OnRightClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished
struct UUAEUserWidget_OnFadeOutFinished_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnFadeInFinished
struct UUAEUserWidget_OnFadeInFinished_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnDoubleClicked
struct UUAEUserWidget_OnDoubleClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.OnClicked
struct UUAEUserWidget_OnClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// DelegateFunction UnrealArchExt.UAEUserWidget.OnClearUIStack__DelegateSignature
struct UUAEUserWidget_OnClearUIStack__DelegateSignature_Params
{
};

// Function UnrealArchExt.UAEUserWidget.IntCompare
struct UUAEUserWidget_IntCompare_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EWidgetCompareType                                 CompareType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.InitWidget
struct UUAEUserWidget_InitWidget_Params
{
	bool                                               Recursive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.InitCustomWidget
struct UUAEUserWidget_InitCustomWidget_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            WidgetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.Hide
struct UUAEUserWidget_Hide_Params
{
};

// Function UnrealArchExt.UAEUserWidget.HandleUIMessageBattle
struct UUAEUserWidget_HandleUIMessageBattle_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.HandleUIMessage
struct UUAEUserWidget_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.GetWidgetsByName
struct UUAEUserWidget_GetWidgetsByName_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	struct FString                                     OuterName;                                                // (Parm, ZeroConstructor)
	bool                                               bUseContains;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetWidgetContainsName
struct UUAEUserWidget_GetWidgetContainsName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetParentWidget
struct UUAEUserWidget_GetParentWidget_Params
{
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningPlayer
struct UUAEUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager
struct UUAEUserWidget_GetOwningLogicManager_Params
{
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD
struct UUAEUserWidget_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetImgDynamicMaterial
struct UUAEUserWidget_GetImgDynamicMaterial_Params
{
	class UImage*                                      ImageMat;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetChildWidgetByEqualPolitics
struct UUAEUserWidget_GetChildWidgetByEqualPolitics_Params
{
	struct FString                                     ChildName;                                                // (Parm, ZeroConstructor)
	EUserWidgetNameEqualPolitics                       EqualPolitics;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecursiveDepth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetChildWidget
struct UUAEUserWidget_GetChildWidget_Params
{
	struct FString                                     WName;                                                    // (Parm, ZeroConstructor)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetAdapation
struct UUAEUserWidget_GetAdapation_Params
{
	struct FMargin                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.FloatCompare
struct UUAEUserWidget_FloatCompare_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EWidgetCompareType                                 CompareType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.DynamicRegistUIMsgToCache
struct UUAEUserWidget_DynamicRegistUIMsgToCache_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.DestroyWidget
struct UUAEUserWidget_DestroyWidget_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ClearOpenedUIStack
struct UUAEUserWidget_ClearOpenedUIStack_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ClearFunctionCacheByMsgName
struct UUAEUserWidget_ClearFunctionCacheByMsgName_Params
{
	struct FString                                     InUIMsg;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.ClearFunctionCache
struct UUAEUserWidget_ClearFunctionCache_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ClearClassWidgetTree
struct UUAEUserWidget_ClearClassWidgetTree_Params
{
};

// Function UnrealArchExt.UAEUserWidget.BindCustomUserEvent
struct UUAEUserWidget_BindCustomUserEvent_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            WidgetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAECanvasPanel.ReceiveInitCanvasPanel
struct UUAECanvasPanel_ReceiveInitCanvasPanel_Params
{
};

// Function UnrealArchExt.BackendHUD.GetFrontendHUDByGameInstance
struct UBackendHUD_GetFrontendHUDByGameInstance_Params
{
	class UGameInstance*                               GameInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.BackendHUD.GetFrontendHUD
struct UBackendHUD_GetFrontendHUD_Params
{
	int                                                FrontendHUDIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.SetEnableRemoveDynamicWidgets
struct ULogicManagerBase_SetEnableRemoveDynamicWidgets_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.IsEnableRemoveDynamicWidgets
struct ULogicManagerBase_IsEnableRemoveDynamicWidgets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.GetWidgetList
struct ULogicManagerBase_GetWidgetList_Params
{
	TArray<class UUAEUserWidget*>                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.LogicManagerBase.GetWidgetByName
struct ULogicManagerBase_GetWidgetByName_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.GetWidgetByClass
struct ULogicManagerBase_GetWidgetByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD
struct ULogicManagerBase_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.GetDefaultSceneCamera
struct ULogicManagerBase_GetDefaultSceneCamera_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.DispatchUIMessage
struct ULogicManagerBase_DispatchUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.SwitchGameStatus
struct UFrontendHUD_SwitchGameStatus_Params
{
	struct FName                                       GameStatus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.StandAloneSwitchGameStatus
struct UFrontendHUD_StandAloneSwitchGameStatus_Params
{
	struct FName                                       InGameStatus;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.OnPreLoadMap
struct UFrontendHUD_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld
struct UFrontendHUD_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated
struct UFrontendHUD_OnGameViewportClientCreated_Params
{
};

// Function UnrealArchExt.FrontendHUD.GetWorld
struct UFrontendHUD_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetUtils
struct UFrontendHUD_GetUtils_Params
{
	class UFrontendUtils*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetPlayerController
struct UFrontendHUD_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetLogicManagerByName
struct UFrontendHUD_GetLogicManagerByName_Params
{
	struct FString                                     LogicManagerTagName;                                      // (Parm, ZeroConstructor)
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetLogicManager
struct UFrontendHUD_GetLogicManager_Params
{
	int                                                LogicManagerIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetGameViewportClient
struct UFrontendHUD_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetGameMode
struct UFrontendHUD_GetGameMode_Params
{
	class AGameMode*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetGameInstance
struct UFrontendHUD_GetGameInstance_Params
{
	class UGameInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.FindRegistedUIFunctionList
struct UFrontendHUD_FindRegistedUIFunctionList_Params
{
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     moduleMsg;                                                // (Parm, ZeroConstructor)
	TArray<TWeakObjectPtr<class UObject>>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.FrontendHUD.EnableGuiTest
struct UFrontendHUD_EnableGuiTest_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.DynamicRegistUIMsgToCache
struct UFrontendHUD_DynamicRegistUIMsgToCache_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.ClearLogicManagerByName
struct UFrontendHUD_ClearLogicManagerByName_Params
{
	struct FString                                     managerName;                                              // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
struct UFrontendUtils_SwitchSceneCameraToTransform_Params
{
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	TEnumAsByte<enum ECameraProjectionMode>            ProjectionMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
struct UFrontendUtils_SwitchSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetSceneSkyLightProperty
struct UFrontendUtils_SetSceneSkyLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
struct UFrontendUtils_SetScenePointLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	int                                                inverseSquareFalloff;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
struct UFrontendUtils_SetSceneDirectionalLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	struct FLightingChannels                           Channel;                                                  // (Parm)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneSkyLight
struct UFrontendUtils_RegisterSceneSkyLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ASkyLight*                                   Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
struct UFrontendUtils_RegisterScenePointLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APointLight*                                 Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
struct UFrontendUtils_RegisterSceneDirectionalLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
struct UFrontendUtils_RegisterSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                SceneCamera;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.PopAllPushedUI
struct UFrontendUtils_PopAllPushedUI_Params
{
};

// Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
struct UFrontendUtils_OnAllSceneCamerasRegistered_Params
{
};

// Function UnrealArchExt.FrontendUtils.IsPushedPanel
struct UFrontendUtils_IsPushedPanel_Params
{
	struct FName                                       managerName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.IsNoRenderClient
struct UFrontendUtils_IsNoRenderClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound
struct UFrontendUtils_GlobalUIEventDispatcher_GetDelegateIsBound_Params
{
	struct FString                                     DelegateNum;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetUIStackTopSrcTag
struct UFrontendUtils_GetUIStackTopSrcTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.FrontendUtils.GetUIStackTopDstTag
struct UFrontendUtils_GetUIStackTopDstTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.FrontendUtils.GetUIStackTop
struct UFrontendUtils_GetUIStackTop_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.FrontendUtils.GetSceneCamera
struct UFrontendUtils_GetSceneCamera_Params
{
	class ACameraActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
struct UFrontendUtils_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher
struct UFrontendUtils_GetGlobalUIEventDispatcher_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
struct UFrontendUtils_GetGlobalUIContainer_Params
{
	struct FName                                       ContainerName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEWidgetContainer*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.EnableLobbyMainLight
struct UFrontendUtils_EnableLobbyMainLight_Params
{
	bool                                               NewEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.ClearAllSceneCameras
struct UFrontendUtils_ClearAllSceneCameras_Params
{
};

// Function UnrealArchExt.UAEDataTable.SetTableData_String
struct UUAEDataTable_SetTableData_String_Params
{
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEDataTable.SetTableData_Int32
struct UUAEDataTable_SetTableData_Int32_Params
{
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEDataTable.SetTableData_Float
struct UUAEDataTable_SetTableData_Float_Params
{
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEDataTable.GetTableName
struct UUAEDataTable_GetTableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.UAEDataTable.GetRealTableName
struct UUAEDataTable_GetRealTableName_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.UAEDataTable.ConditionAddEmptyRow
struct UUAEDataTable_ConditionAddEmptyRow_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal
struct UUAEWidgetContainer_RemoveWidgetInternal_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.RemoveWidget
struct UUAEWidgetContainer_RemoveWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrderInternal
struct UUAEWidgetContainer_AddWidgetWithZOrderInternal_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrder
struct UUAEWidgetContainer_AddWidgetWithZOrder_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal
struct UUAEWidgetContainer_AddWidgetInternal_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidget
struct UUAEWidgetContainer_AddWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

