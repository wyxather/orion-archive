#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCursorVisibility
struct UPartyCharacterPanel_C_SetCursorVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibleEquipmentInfo_Innner
struct UPartyCharacterPanel_C_SetVisibleEquipmentInfo_Innner_Params
{
public:
	int32                                        ShowCount;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x85 (0x85 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetEquipmentInfo
struct UPartyCharacterPanel_C_SetEquipmentInfo_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEQUIPMENT_ITEM_PARAM             ParamType;                                         // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E4F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ParamBefore;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParamAfter;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.IsPlayingItemAnimation
struct UPartyCharacterPanel_C_IsPlayingItemAnimation_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetPotentialityEffect
struct UPartyCharacterPanel_C_SetPotentialityEffect_Params
{
public:
	enum class EPlayableCharacterID              PlayerID;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x375 (0x375 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCharacterData
struct UPartyCharacterPanel_C_SetCharacterData_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3 (0x3 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.IsVisibileLockIcon
struct UPartyCharacterPanel_C_IsVisibileLockIcon_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetHpSpRange
struct UPartyCharacterPanel_C_SetHpSpRange_Params
{
public:
	int32                                        Min;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibilityLockIcon
struct UPartyCharacterPanel_C_SetVisibilityLockIcon_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.IsAnimationPlay
struct UPartyCharacterPanel_C_IsAnimationPlay_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.FormationChange
struct UPartyCharacterPanel_C_FormationChange_Params
{
public:
	bool                                         IsInAnim;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsUp;                                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCharacterColor
struct UPartyCharacterPanel_C_SetCharacterColor_Params
{
public:
	enum class EPARTY_PANEL_CHARA_COLOR_TYPE     NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SwitchDisplayInfo
struct UPartyCharacterPanel_C_SwitchDisplayInfo_Params
{
public:
	bool                                         IsStatus;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10D (0x10D - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayFlipbookAnim
struct UPartyCharacterPanel_C_PlayFlipbookAnim_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EKSCharacterAction                ActionID;                                          // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   ActionDir;                                         // 0xF1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoop;                                            // 0xF2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E59[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DrawSize;                                          // 0xF4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.IsHealAnimStop
struct UPartyCharacterPanel_C_IsHealAnimStop_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.Play Anim Intetrnal
struct UPartyCharacterPanel_C_Play_Anim_Intetrnal_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetMPData
struct UPartyCharacterPanel_C_SetMPData_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetHPData
struct UPartyCharacterPanel_C_SetHPData_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCharacterData_BP
struct UPartyCharacterPanel_C_SetCharacterData_BP_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.OutFocus_BP
struct UPartyCharacterPanel_C_OutFocus_BP_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.Focus_BP
struct UPartyCharacterPanel_C_Focus_BP_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetParamRange
struct UPartyCharacterPanel_C_SetParamRange_Params
{
public:
	int32                                        ParamMin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParamMax;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetEquipmentAnim
struct UPartyCharacterPanel_C_SetEquipmentAnim_Params
{
public:
	bool                                         CanEquip;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibleEquipIcon
struct UPartyCharacterPanel_C_SetVisibleEquipIcon_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibleEquipmentInfo
struct UPartyCharacterPanel_C_SetVisibleEquipmentInfo_Params
{
public:
	int32                                        ShowCount;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.Tick
struct UPartyCharacterPanel_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function PartyCharacterPanel.PartyCharacterPanel_C.ExecuteUbergraph_PartyCharacterPanel
struct UPartyCharacterPanel_C_ExecuteUbergraph_PartyCharacterPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


