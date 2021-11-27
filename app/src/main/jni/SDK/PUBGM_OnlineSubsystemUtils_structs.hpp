#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"
#include "PUBGM_OnlineSubsystem_classes.hpp"
#include "PUBGM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__Abandon    = 5,
	EClientRequestType__EClientRequestType_MAX = 6
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_Banned = 10,
	EPartyReservationResult__ReservationRequestCanceled = 11,
	EPartyReservationResult__ReservationInvalid = 12,
	EPartyReservationResult__BadSessionId = 13,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = 14,
	EPartyReservationResult__EPartyReservationResult_MAX = 15
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x0084
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0x84];                                      // 0x0000(0x0084) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0030
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                       // 0x0000(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Token;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, Transient)
	struct FString                                     Type;                                                     // 0x0018(0x000C) (Edit, ZeroConstructor)
	TArray<unsigned char>                              TokenBytes;                                               // 0x0024(0x000C) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x001C
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x000C) (Transient)
	struct FString                                     ValidationStr;                                            // 0x000C(0x000C) (ZeroConstructor, Transient)
	float                                              ElapsedTime;                                              // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x001C
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0004(0x000C) (Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0010(0x000C) (ZeroConstructor, Transient)
};

}

