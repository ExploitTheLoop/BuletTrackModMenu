#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Control_Comp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.SetCameraPosIndex
struct ULobby_Control_Comp_C_SetCameraPosIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.CancelScroll
struct ULobby_Control_Comp_C_CancelScroll_Params
{
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.CheckSide12
struct ULobby_Control_Comp_C_CheckSide12_Params
{
	float                                              pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               inside;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnMouseButtonUp
struct ULobby_Control_Comp_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnMouseButtonDown
struct ULobby_Control_Comp_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.SetCameraPos
struct ULobby_Control_Comp_C_SetCameraPos_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.MoveCamera
struct ULobby_Control_Comp_C_MoveCamera_Params
{
	struct FVector                                     Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                sideIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchEnded
struct ULobby_Control_Comp_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchMoved
struct ULobby_Control_Comp_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchStarted
struct ULobby_Control_Comp_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.AniCamera
struct ULobby_Control_Comp_C_AniCamera_Params
{
	int                                                from;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                to;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShoudDouble;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.GetCamera
struct ULobby_Control_Comp_C_GetCamera_Params
{
	class ACameraActor*                                Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.Tick
struct ULobby_Control_Comp_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.Construct
struct ULobby_Control_Comp_C_Construct_Params
{
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.ExecuteUbergraph_Lobby_Control_Comp
struct ULobby_Control_Comp_C_ExecuteUbergraph_Lobby_Control_Comp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnLobbyEndedDispatcher__DelegateSignature
struct ULobby_Control_Comp_C_OnLobbyEndedDispatcher__DelegateSignature_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchStartedDispatcher__DelegateSignature
struct ULobby_Control_Comp_C_OnTouchStartedDispatcher__DelegateSignature_Params
{
};

// Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchEndedDispatcher__DelegateSignature
struct ULobby_Control_Comp_C_OnTouchEndedDispatcher__DelegateSignature_Params
{
	float                                              OffSetX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffSetY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

