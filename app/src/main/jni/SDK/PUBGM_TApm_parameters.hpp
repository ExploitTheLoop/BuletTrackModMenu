#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_TApm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TApm.TApmHelper.ValidateDevice
struct UTApmHelper_ValidateDevice_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TApm.TApmHelper.UpdateGameStatusToVmp
struct UTApmHelper_UpdateGameStatusToVmp_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.SetVersionIden
struct UTApmHelper_SetVersionIden_Params
{
	struct FString                                     versionName;                                              // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.SetUserID
struct UTApmHelper_SetUserID_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.SetTragetFrameRate
struct UTApmHelper_SetTragetFrameRate_Params
{
	int                                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.SetQuality
struct UTApmHelper_SetQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.SetPssManualMode
struct UTApmHelper_SetPssManualMode_Params
{
};

// Function TApm.TApmHelper.SetLocale
struct UTApmHelper_SetLocale_Params
{
	struct FString                                     Locale;                                                   // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.SetDeviceLevel
struct UTApmHelper_SetDeviceLevel_Params
{
	int                                                DeviceLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.setAffinityForThread
struct UTApmHelper_setAffinityForThread_Params
{
	int                                                tid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.requestResourceGuarantee
struct UTApmHelper_requestResourceGuarantee_Params
{
	int                                                Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                loadType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                applyType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.RequestPssSample
struct UTApmHelper_RequestPssSample_Params
{
};

// Function TApm.TApmHelper.ReleaseStepEventContext
struct UTApmHelper_ReleaseStepEventContext_Params
{
};

// Function TApm.TApmHelper.RegisterRomCallBackMeta
struct UTApmHelper_RegisterRomCallBackMeta_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PutKVS
struct UTApmHelper_PutKVS_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PutKVI
struct UTApmHelper_PutKVI_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PutKVD
struct UTApmHelper_PutKVD_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostValueS
struct UTApmHelper_PostValueS_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PostValueI3
struct UTApmHelper_PostValueI3_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostValueI2
struct UTApmHelper_PostValueI2_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostValueI1
struct UTApmHelper_PostValueI1_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostValueF3
struct UTApmHelper_PostValueF3_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostValueF2
struct UTApmHelper_PostValueF2_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostValueF1
struct UTApmHelper_PostValueF1_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostTrackState
struct UTApmHelper_PostTrackState_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostStreamEvent
struct UTApmHelper_PostStreamEvent_Params
{
	int                                                stepId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                code;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PostStepEvent
struct UTApmHelper_PostStepEvent_Params
{
	struct FString                                     eventCategory;                                            // (Parm, ZeroConstructor)
	int                                                stepId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                code;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	struct FString                                     extraKey;                                                 // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PostNTL
struct UTApmHelper_PostNTL_Params
{
	int                                                latency;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostLargeValueS
struct UTApmHelper_PostLargeValueS_Params
{
	struct FString                                     catgory;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PostLagStatus
struct UTApmHelper_PostLagStatus_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostGameStatusToTGPASS
struct UTApmHelper_PostGameStatusToTGPASS_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PostGameStatusToTGPASMap
struct UTApmHelper_PostGameStatusToTGPASMap_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               mapData;                                                  // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PostGameStatusToTGPAIS
struct UTApmHelper_PostGameStatusToTGPAIS_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PostFrame
struct UTApmHelper_PostFrame_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostEvent
struct UTApmHelper_PostEvent_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
	bool                                               savetolocal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.MarkLevelLoadCompleted
struct UTApmHelper_MarkLevelLoadCompleted_Params
{
};

// Function TApm.TApmHelper.MarkLevelLoad
struct UTApmHelper_MarkLevelLoad_Params
{
	struct FString                                     SceneName;                                                // (Parm, ZeroConstructor)
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.MarkLevelFin
struct UTApmHelper_MarkLevelFin_Params
{
};

// Function TApm.TApmHelper.MarkHideLoadingUI
struct UTApmHelper_MarkHideLoadingUI_Params
{
};

// Function TApm.TApmHelper.MarkAppFinishLaunch
struct UTApmHelper_MarkAppFinishLaunch_Params
{
};

// Function TApm.TApmHelper.LinkLastStepEventSession
struct UTApmHelper_LinkLastStepEventSession_Params
{
	struct FString                                     eventCategory;                                            // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.InitTGPA
struct UTApmHelper_InitTGPA_Params
{
};

// Function TApm.TApmHelper.InitStepEventContext
struct UTApmHelper_InitStepEventContext_Params
{
};

// Function TApm.TApmHelper.GetOptCfgStr
struct UTApmHelper_GetOptCfgStr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TApm.TApmHelper.GetDeviceLevelByQcc
struct UTApmHelper_GetDeviceLevelByQcc_Params
{
	struct FString                                     ConfigName;                                               // (Parm, ZeroConstructor)
	struct FString                                     GPUFamily;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TApm.TApmHelper.GetDeviceLevel
struct UTApmHelper_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TApm.TApmHelper.GetDataFromTGPA
struct UTApmHelper_GetDataFromTGPA_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TApm.TApmHelper.EndTupleWrap
struct UTApmHelper_EndTupleWrap_Params
{
};

// Function TApm.TApmHelper.EndTag
struct UTApmHelper_EndTag_Params
{
};

// Function TApm.TApmHelper.EndExclude
struct UTApmHelper_EndExclude_Params
{
};

// Function TApm.TApmHelper.EnableDebugMode
struct UTApmHelper_EnableDebugMode_Params
{
};

// Function TApm.TApmHelper.DumpEvent
struct UTApmHelper_DumpEvent_Params
{
	struct FString                                     dumpfile;                                                 // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.cancelAffinityForThread
struct UTApmHelper_cancelAffinityForThread_Params
{
	int                                                tid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.BeginTupleWrap
struct UTApmHelper_BeginTupleWrap_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.BeginExclude
struct UTApmHelper_BeginExclude_Params
{
};

// Function TApm.TApmHelper.AddTag
struct UTApmHelper_AddTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function TApm.TApmSceneMarker.SetEnable
struct UTApmSceneMarker_SetEnable_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmSceneMarker.MarkOPScene
struct UTApmSceneMarker_MarkOPScene_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmSceneMarker.MarkFlowScene
struct UTApmSceneMarker_MarkFlowScene_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmSceneMarker.CancelOPScene
struct UTApmSceneMarker_CancelOPScene_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

