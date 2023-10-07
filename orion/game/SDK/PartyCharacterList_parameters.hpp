#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.IsUIPartsRunning
struct UPartyCharacterList_C_IsUIPartsRunning_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.IsPlayingAnim
struct UPartyCharacterList_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetMenuRelativePos
struct UPartyCharacterList_C_GetMenuRelativePos_Params
{
public:
	struct FVector2D                             RelativePos;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.CursorRight
struct UPartyCharacterList_C_CursorRight_Params
{
public:
	bool                                         MenuDecide;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.CursorLeft
struct UPartyCharacterList_C_CursorLeft_Params
{
public:
	bool                                         MenuCancel;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.DecideMenu
struct UPartyCharacterList_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.CancelMenu
struct UPartyCharacterList_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetCursorPosition
struct UPartyCharacterList_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x35 (0x35 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.ListCursorDown_FromCheckIndex
struct UPartyCharacterList_C_ListCursorDown_FromCheckIndex_Params
{
public:
	TArray<bool>                                 CheckIndex;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsSuccess;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.ListCursorUp_FromCheckIndex
struct UPartyCharacterList_C_ListCursorUp_FromCheckIndex_Params
{
public:
	TArray<bool>                                 CheckIndex;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsSuccess;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetMainMemberPanel
struct UPartyCharacterList_C_GetMainMemberPanel_Params
{
public:
	int32                                        MainMemberIndex;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyCharacterPanelBase*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.IsPlayingItemAnimation
struct UPartyCharacterList_C_IsPlayingItemAnimation_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.Init
struct UPartyCharacterList_C_Init_Params
{
public:
	bool                                         EnableStatusSpacer;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.IsVisibleLockIcon
struct UPartyCharacterList_C_IsVisibleLockIcon_Params
{
public:
	int32                                        ListIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SelectPossessionNum
struct UPartyCharacterList_C_SelectPossessionNum_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetPossessionNum
struct UPartyCharacterList_C_SetPossessionNum_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetCharaLockIcon
struct UPartyCharacterList_C_SetCharaLockIcon_Params
{
public:
	class UPartyCharacterPanel_C*                CharacterPanel;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterID;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceLock;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetCaptionMode
struct UPartyCharacterList_C_SetCaptionMode_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2C (0x2C - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetShowPlayingStory
struct UPartyCharacterList_C_SetShowPlayingStory_Params
{
public:
	bool                                         ShowStory;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x469 (0x469 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetCurrentCharacterData
struct UPartyCharacterList_C_GetCurrentCharacterData_Params
{
public:
	struct FPlayableCharacterData                CharacterData;                                     // 0x0(0x1B8)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.IsChangeFormation
struct UPartyCharacterList_C_IsChangeFormation_Params
{
public:
	bool                                         IsChangeFormation;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x111 (0x111 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.RefreshSelect
struct UPartyCharacterList_C_RefreshSelect_Params
{
public:
	int32                                        RefreshIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.RequestChangeFormation
struct UPartyCharacterList_C_RequestChangeFormation_Params
{
public:
	int32                                        ChangeIndex1;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChangeIndex2;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccess;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetPassCursorPosition
struct UPartyCharacterList_C_SetPassCursorPosition_Params
{
public:
	int32                                        PassCursorPosition;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetMainMemberEquipIcon
struct UPartyCharacterList_C_SetMainMemberEquipIcon_Params
{
public:
	int32                                        MainMemberIndex;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SwitchDisplayInfo
struct UPartyCharacterList_C_SwitchDisplayInfo_Params
{
public:
	bool                                         IsStatus;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.IsPlayingHealAnim
struct UPartyCharacterList_C_IsPlayingHealAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.PlayRecovery
struct UPartyCharacterList_C_PlayRecovery_Params
{
public:
	TArray<int32>                                Member;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ERECOVERY_EFFECT_TYPE             RecoveryType;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetPartySelect
struct UPartyCharacterList_C_SetPartySelect_Params
{
public:
	TArray<int32>                                MemberList;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.OutFocus
struct UPartyCharacterList_C_OutFocus_Params
{
public:
	bool                                         Fast;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x169 (0x169 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.RefreshPartyList
struct UPartyCharacterList_C_RefreshPartyList_Params
{
public:
	bool                                         UseLockIcon;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DeadIsDark;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Lock1stChara;                                      // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetSelectIndex
struct UPartyCharacterList_C_GetSelectIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SetCursorPosition
struct UPartyCharacterList_C_SetCursorPosition_Params
{
public:
	int32                                        NewCursorPosition;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectAnima;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSuccess;                                         // 0x6(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetRightAxisX
struct UPartyCharacterList_C_GetRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetRightAxisY
struct UPartyCharacterList_C_GetRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetLeftAxisX
struct UPartyCharacterList_C_GetLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetLeftAxisY
struct UPartyCharacterList_C_GetLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetGamePadAxisX
struct UPartyCharacterList_C_GetGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.GetGamePadAxisY
struct UPartyCharacterList_C_GetGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SubMenu_WorldMapSlowCursorX
struct UPartyCharacterList_C_SubMenu_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.SubMenu_WorldMapSlowCursorY
struct UPartyCharacterList_C_SubMenu_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.Tick
struct UPartyCharacterList_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function PartyCharacterList.PartyCharacterList_C.ExecuteUbergraph_PartyCharacterList
struct UPartyCharacterList_C_ExecuteUbergraph_PartyCharacterList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


