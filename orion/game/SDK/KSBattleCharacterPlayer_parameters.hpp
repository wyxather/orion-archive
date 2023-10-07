#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetBaseJobActionLabel
struct AKSBattleCharacterPlayer_C_SetBaseJobActionLabel_Params
{
public:
	class FName                                  BaseJobLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateGuard
struct AKSBattleCharacterPlayer_C_SetStateGuard_Params
{
public:
	bool                                         Guard;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateCommandSelect
struct AKSBattleCharacterPlayer_C_SetStateCommandSelect_Params
{
public:
	bool                                         CommandSelectFlag;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PreparationFlag;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayForceIdle;                                     // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateChargeAction
struct AKSBattleCharacterPlayer_C_SetStateChargeAction_Params
{
public:
	bool                                         ChargeFlag;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateGuardSP
struct AKSBattleCharacterPlayer_C_SetStateGuardSP_Params
{
public:
	bool                                         GuardSPFlag;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.GetDefaultWarpTransform
struct AKSBattleCharacterPlayer_C_GetDefaultWarpTransform_Params
{
public:
	struct FTransform                            DefaultWarpTransform;                              // 0x0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetDefaultWarpTransform
struct AKSBattleCharacterPlayer_C_SetDefaultWarpTransform_Params
{
public:
	struct FTransform                            DefaultWarpTransform;                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterNPC
struct AKSBattleCharacterPlayer_C_SetCharacterNPC_Params
{
public:
	bool                                         NPCFlag;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWEAPON_CATEGORY                  EquipWeaponType;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.GetMode
struct AKSBattleCharacterPlayer_C_GetMode_Params
{
public:
	enum class ECHARACTER_MODE                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateLevelup
struct AKSBattleCharacterPlayer_C_SetStateLevelup_Params
{
public:
	bool                                         IsLevelup;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateVictory
struct AKSBattleCharacterPlayer_C_SetStateVictory_Params
{
public:
	bool                                         IsVictory;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetEquipWeaponType
struct AKSBattleCharacterPlayer_C_SetEquipWeaponType_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.Set State Potentiality Action
struct AKSBattleCharacterPlayer_C_Set_State_Potentiality_Action_Params
{
public:
	bool                                         IsPotentialityAction;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          EffectColor;                                       // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterVisible
struct AKSBattleCharacterPlayer_C_SetCharacterVisible_Params
{
public:
	bool                                         Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.Set State Harden
struct AKSBattleCharacterPlayer_C_Set_State_Harden_Params
{
public:
	bool                                         HardenFlag;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateDisease
struct AKSBattleCharacterPlayer_C_SetStateDisease_Params
{
public:
	bool                                         DiseaseFlag;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterAlpha
struct AKSBattleCharacterPlayer_C_SetCharacterAlpha_Params
{
public:
	float                                        Alpha;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetupActionTable
struct AKSBattleCharacterPlayer_C_SetupActionTable_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x111 (0x111 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PopActionStack
struct AKSBattleCharacterPlayer_C_PopActionStack_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EKSCharacterAction                PopAction;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PushActionStack
struct AKSBattleCharacterPlayer_C_PushActionStack_Params
{
public:
	enum class EKSCharacterAction                Action;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Direction;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.GetIdle
struct AKSBattleCharacterPlayer_C_GetIdle_Params
{
public:
	enum class EKSCharacterAction                Action;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E9 (0x3E9 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayActionLocal
struct AKSBattleCharacterPlayer_C_PlayActionLocal_Params
{
public:
	enum class EKSCharacterAction                Action;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Direction;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateDead
struct AKSBattleCharacterPlayer_C_SetStateDead_Params
{
public:
	bool                                         DeadFlag;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStatePinch
struct AKSBattleCharacterPlayer_C_SetStatePinch_Params
{
public:
	bool                                         PinchFlag;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.IsPlaying
struct AKSBattleCharacterPlayer_C_IsPlaying_Params
{
public:
	bool                                         Playing;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ReceiveTick
struct AKSBattleCharacterPlayer_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetBattleSelectMaterial
struct AKSBattleCharacterPlayer_C_SetBattleSelectMaterial_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Boost;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayBattleAction
struct AKSBattleCharacterPlayer_C_PlayBattleAction_Params
{
public:
	enum class EBATTLE_ACTION_TYPE               BattleAction;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StackClear;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateBoost
struct AKSBattleCharacterPlayer_C_SetStateBoost_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayCharacterAction
struct AKSBattleCharacterPlayer_C_PlayCharacterAction_Params
{
public:
	enum class EKSCharacterAction                Label;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Direction;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StackClear;                                        // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetEnablePlayAction
struct AKSBattleCharacterPlayer_C_SetEnablePlayAction_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterOpacity
struct AKSBattleCharacterPlayer_C_SetCharacterOpacity_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WithCanoe;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetPotentialityActionBodyColor
struct AKSBattleCharacterPlayer_C_SetPotentialityActionBodyColor_Params
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetPotentialityActionEyesColor
struct AKSBattleCharacterPlayer_C_SetPotentialityActionEyesColor_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetEnableWonderAction
struct AKSBattleCharacterPlayer_C_SetEnableWonderAction_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2DA (0x2DA - 0x0)
// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ExecuteUbergraph_KSBattleCharacterPlayer
struct AKSBattleCharacterPlayer_C_ExecuteUbergraph_KSBattleCharacterPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


