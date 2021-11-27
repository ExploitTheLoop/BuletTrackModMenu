#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C
// 0x018C (0x049C - 0x0310)
class Abp_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EmulatorCheck_FirstinLobby;                               // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_BgIceThemeSwitch;                                // 0x0315(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_RankChange;                                      // 0x0316(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0317(0x0001) MISSED OFFSET
	int                                                BP_PlayerTicket;                                          // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_AvatarInfo                       BP_STRUCT_AvatarInfo;                                     // 0x031C(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_PlayerUid;                                             // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerIconUrl;                                         // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerAliasNation;                                     // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerQQVip;                                           // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyBubble_CurItemID;                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGold;                                            // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList;                                      // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_UserHideLobbyAutoAdaptBox;                             // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	int                                                BP_PlayerGender;                                          // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                G_Index_In_Login;                                         // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                G_Index_In_Collect;                                       // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraIndex;                                // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraBlendTime;                            // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SystemTargetCameraSysName;                             // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SystemTargetCameraBlendTime;                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_CurSkinId;                                       // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyPlayerNum;                                        // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LOBBY_AdjustURL;                                       // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivityBtnDisplay               BP_STRUCT_ActivityBtnDisplay;                             // 0x03A0(0x0084) (Edit, BlueprintVisible)
	struct FString                                     BP_LobbyBubble_CurCdn;                                    // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_PlayerMaxRankLevel;                              // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_Lobby_ActivityNotOpenList;                       // 0x0434(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerAliasID;                                         // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TransformUseList                 BP_STRUCT_TransformUseList;                               // 0x0444(0x0008) (Edit, BlueprintVisible)
	int                                                BP_PlayerFpToken;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerAliasTitle;                                      // 0x0450(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerLevel;                                           // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_MenuOpen;                                        // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	int                                                BP_SystemTargetCameraIndex;                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerName;                                            // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_PlayerDiamondShow;                                     // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	int                                                BP_PlayerExp;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_Role_Avatar_Frame;                               // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DataMgrInit;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_ActivityBtnDisplay>       BP_ARRAY_LobbyActivityBtnDisplayList;                     // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerDiamond;                                         // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_BgAnniversaryThemeSwitch;                        // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_BgResidentEvilThemeSwitch;                       // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0496(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C");
		return pStaticClass;
	}


	void EventLobbyAndroidBack_NoFetch();
	void EventLobbyAndroidBack();
	void EventSwitchLobbyCameraByIndex_NoFetch();
	void EventSwitchLobbyCameraByIndex();
	void UserConstructionScript();
};


}

