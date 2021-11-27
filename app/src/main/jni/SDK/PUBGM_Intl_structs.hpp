#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Intl.StatEventType
enum class EStatEventType : uint8_t
{
	StatEventType__APP_LAUNCH      = 0,
	StatEventType__LOADING_COMPLETED = 1,
	StatEventType__REGISTER_COMPLETED = 2,
	StatEventType__TUTORIAL_START  = 3,
	StatEventType__TUTORIAL_COMPLETED = 4,
	StatEventType__SOLO            = 5,
	StatEventType__DUO             = 6,
	StatEventType__SQUAD           = 7,
	StatEventType__ONE_MAN_SQUAD   = 8,
	StatEventType__LOGIN_REWARDS   = 9,
	StatEventType__LEVEL           = 10,
	StatEventType__FRIEND_INVITE   = 11,
	StatEventType__FRIEND_ACCEPT   = 12,
	StatEventType__FB_SHARE        = 13,
	StatEventType__PURCHASE_CONSIDER = 14,
	StatEventType__PURCHASE        = 15,
	StatEventType__FIRST_PURCHASE_GIFT = 16,
	StatEventType__CHICKEN_DINNER  = 17,
	StatEventType__GAME_INVITE     = 18,
	StatEventType__PURCHASE_UCTREASUREBOX = 19,
	StatEventType__StatEventType_MAX = 20
};



}

