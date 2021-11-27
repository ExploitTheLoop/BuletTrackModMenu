#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_AnimBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_AnimBP.Lobby_AnimBP_C.CancleSkatePose
struct ULobby_AnimBP_C_CancleSkatePose_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.SetSkatePose
struct ULobby_AnimBP_C_SetSkatePose_Params
{
	class UAnimSequenceBase*                           start_SkateAnim;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           idle_SKateAnim;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.SetIsUsingSpecialIdle
struct ULobby_AnimBP_C_SetIsUsingSpecialIdle_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.ProcessAvatarEquipmentChange
struct ULobby_AnimBP_C_ProcessAvatarEquipmentChange_Params
{
	class UBackpackAvatarHandle*                       AvatarHandle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquiped;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.WeaponPlayAnimEnd
struct ULobby_AnimBP_C_WeaponPlayAnimEnd_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.StartWeaponPlayAnim
struct ULobby_AnimBP_C_StartWeaponPlayAnim_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.CountDownForWeaponPlay
struct ULobby_AnimBP_C_CountDownForWeaponPlay_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.ProcessSceneTypeChange
struct ULobby_AnimBP_C_ProcessSceneTypeChange_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.ProcessPosChange
struct ULobby_AnimBP_C_ProcessPosChange_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.ProcessGenderChange
struct ULobby_AnimBP_C_ProcessGenderChange_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.GetWeaponUseGenderType
struct ULobby_AnimBP_C_GetWeaponUseGenderType_Params
{
	unsigned char                                      PosIdx;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ELobbyCharacterAnimType>          gender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ELobbyCharacterAnimType>          gender_type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.SetWeaponAnimation
struct ULobby_AnimBP_C_SetWeaponAnimation_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.UpdatePoseStateIndex
struct ULobby_AnimBP_C_UpdatePoseStateIndex_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.SetWeaponGrip
struct ULobby_AnimBP_C_SetWeaponGrip_Params
{
	bool                                               WeaponGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.OnCancelPoseWithFriend
struct ULobby_AnimBP_C_OnCancelPoseWithFriend_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.OnPoseWithFriend
struct ULobby_AnimBP_C_OnPoseWithFriend_Params
{
	class UAnimSequence*                               AnimSeq;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.PlayWeaponAnim
struct ULobby_AnimBP_C_PlayWeaponAnim_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8EBE0B9340BA1548E3FEF392CAAB88A2
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8EBE0B9340BA1548E3FEF392CAAB88A2_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_A347A3ED47331AAA671B7A9F8D626390
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_A347A3ED47331AAA671B7A9F8D626390_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_59BB895B4FABFB558D844FBD547DA6DF
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_59BB895B4FABFB558D844FBD547DA6DF_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_19A367B64AA6A6E557F95895FD546B0C
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_19A367B64AA6A6E557F95895FD546B0C_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_99BEBB72474B296808E67BA89EF360C4
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_99BEBB72474B296808E67BA89EF360C4_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_02C27FD84D09FAB2A76F7B819BE4E02E
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_02C27FD84D09FAB2A76F7B819BE4E02E_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_6B1B765D4DFCF3ED170D2CA6BA912335
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_6B1B765D4DFCF3ED170D2CA6BA912335_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_DC74B3834291C85A1C11BB907AA1CC44
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_DC74B3834291C85A1C11BB907AA1CC44_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_1CD7157D4AA33BBC8A249794003DA92D
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_1CD7157D4AA33BBC8A249794003DA92D_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_26E2FBDA45BCCD35C178208267A47E3C
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_26E2FBDA45BCCD35C178208267A47E3C_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_19EA61F347E92E523233C0973F710EDD
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_19EA61F347E92E523233C0973F710EDD_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D7A166DD41A3E24756434FA7A0BABDE8
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D7A166DD41A3E24756434FA7A0BABDE8_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_74C05CBE44C7AF6CB793908D2C8B0F08
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_74C05CBE44C7AF6CB793908D2C8B0F08_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_7AA3FDDC4DB88E4C3BF7D381DD41B451
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_7AA3FDDC4DB88E4C3BF7D381DD41B451_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_30941A2F402EFF78369C75A196BA5486
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_30941A2F402EFF78369C75A196BA5486_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8C3B06B446591B5653A365BDE61AB753
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8C3B06B446591B5653A365BDE61AB753_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8C14C676414683DF8D852A8698630DF8
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_8C14C676414683DF8D852A8698630DF8_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_5638270D44D89786C59D70AC2704C84B
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_5638270D44D89786C59D70AC2704C84B_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_7BEEBF7140D8180F3203A49E052695E4
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_7BEEBF7140D8180F3203A49E052695E4_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_B69DC760452A44AA6B9A3DBFA87D06E5
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_B69DC760452A44AA6B9A3DBFA87D06E5_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_49CDC212477CEF995A19DFB399211744
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_TransitionResult_49CDC212477CEF995A19DFB399211744_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_4F88092546B05F43B05B5E95F6329E56
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_4F88092546B05F43B05B5E95F6329E56_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_626A8657450B700E04EA978275350404
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_626A8657450B700E04EA978275350404_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_D75AFFB14B470EBAE1507FB5C158BFB3
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_D75AFFB14B470EBAE1507FB5C158BFB3_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_2FC4424843DAD0EDAC532EA346B5B3D5
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_2FC4424843DAD0EDAC532EA346B5B3D5_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_A513AE2D43A39ABB4CF95CBA42F46E4F
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_A513AE2D43A39ABB4CF95CBA42F46E4F_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_DDCBB29A4A3C78BA06EDE9BE0F603F0F
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_DDCBB29A4A3C78BA06EDE9BE0F603F0F_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_0BA714B245D02D43D9D2AE83CADF0F8E
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_0BA714B245D02D43D9D2AE83CADF0F8E_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_0E60BE884F4F2D4D549762803828DD05
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByBool_0E60BE884F4F2D4D549762803828DD05_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_9A8F47724807B36A5929E3A6B1860F7F
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_9A8F47724807B36A5929E3A6B1860F7F_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_07AFE46040E954CBDBB3088F734467E2
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_07AFE46040E954CBDBB3088F734467E2_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_EE27731C4EE1344DDB785FBD062BE8C6
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_EE27731C4EE1344DDB785FBD062BE8C6_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_2A1BA28C41B59FDC94DD439E6E4AA51F
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_2A1BA28C41B59FDC94DD439E6E4AA51F_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_D49905424D9E64B1DC1DB58770E63F03
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_D49905424D9E64B1DC1DB58770E63F03_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_5E0C64FC43AAF3BD99CE0D84DCFD52A2
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_5E0C64FC43AAF3BD99CE0D84DCFD52A2_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_986285904B872DCB94CF8CBAB9A90888
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_986285904B872DCB94CF8CBAB9A90888_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByInt_4A815C384984B5A2B5386299F2DEED85
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByInt_4A815C384984B5A2B5386299F2DEED85_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_ModifyBone_C2D2D97E414325A1E172869DEE2DE416
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_ModifyBone_C2D2D97E414325A1E172869DEE2DE416_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_ModifyBone_D25BB41445101287DBCE3EB4CAB67171
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_ModifyBone_D25BB41445101287DBCE3EB4CAB67171_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_4BF41F204D641F3C8FA2F1AC89979187
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_4BF41F204D641F3C8FA2F1AC89979187_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_696616664DC8F8B31B7072B548CDF566
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_696616664DC8F8B31B7072B548CDF566_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_C095363F4AC15D76C347A2BFF205FCE4
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_C095363F4AC15D76C347A2BFF205FCE4_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_F7A0422648E25AB4352F9A96EDFC9CC3
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_SequencePlayer_F7A0422648E25AB4352F9A96EDFC9CC3_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_C898A5D7416E49C0B875F381E8BFDFD3
struct ULobby_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_C898A5D7416E49C0B875F381E8BFDFD3_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.BlueprintUpdateAnimation
struct ULobby_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.BlueprintInitializeAnimation
struct ULobby_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.OnLobbyGenderAnimChange
struct ULobby_AnimBP_C_OnLobbyGenderAnimChange_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.OnLobbyCharSceneTypeChange
struct ULobby_AnimBP_C_OnLobbyCharSceneTypeChange_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.OnLobbyCharWeaponChange
struct ULobby_AnimBP_C_OnLobbyCharWeaponChange_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.OnLobbyCharPosChange
struct ULobby_AnimBP_C_OnLobbyCharPosChange_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.SetForceuseIdle
struct ULobby_AnimBP_C_SetForceuseIdle_Params
{
	bool                                               force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.BindSkate
struct ULobby_AnimBP_C_BindSkate_Params
{
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.UnEquip
struct ULobby_AnimBP_C_UnEquip_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               OldItemID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Lobby_AnimBP.Lobby_AnimBP_C.ExecuteUbergraph_Lobby_AnimBP
struct ULobby_AnimBP_C_ExecuteUbergraph_Lobby_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

