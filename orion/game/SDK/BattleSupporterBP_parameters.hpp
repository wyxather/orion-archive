#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.IsSupporterComplete
struct ABattleSupporterBP_C_IsSupporterComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.ChangeMainWeapon
struct ABattleSupporterBP_C_ChangeMainWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  ETargetWeapon;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseWeaponTexture;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.IsCharacterSupporter
struct ABattleSupporterBP_C_IsCharacterSupporter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetAbilityData
struct ABattleSupporterBP_C_GetAbilityData_Params
{
public:
	int32                                        NIndex;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetCurrentPosition
struct ABattleSupporterBP_C_GetCurrentPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetReplayStatus
struct ABattleSupporterBP_C_GetReplayStatus_Params
{
public:
	bool                                         bIsSelfTurn;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_REPLAY_CHARA_STATUS       EReplayStatus;                                     // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.OverrideSupporterDataByNPCData
struct ABattleSupporterBP_C_OverrideSupporterDataByNPCData_Params
{
public:
	struct FNPCData                              NPCData;                                           // 0x0(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetSessionSEType
struct ABattleSupporterBP_C_GetSessionSEType_Params
{
public:
	enum class ESESSION_SE_TYPE                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetCharacterName
struct ABattleSupporterBP_C_GetCharacterName_Params
{
public:
	class FText                                  StrCharacterName;                                  // 0x0(0x18)(Parm, OutParm)
};

// 0x11 (0x11 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetPlayableCharacterID
struct ABattleSupporterBP_C_GetPlayableCharacterID_Params
{
public:
	enum class EPlayableCharacterID              ECharaID;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.OnHitDamageHP
struct ABattleSupporterBP_C_OnHitDamageHP_Params
{
public:
	bool                                         bIsBreakAttack;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsBreakTarget;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 ETotalResist;                                      // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_RESIST                 EWeaponResist;                                     // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.IsSupporterDash
struct ABattleSupporterBP_C_IsSupporterDash_Params
{
public:
	bool                                         ExecDash;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.IsUltimatedSupporter
struct ABattleSupporterBP_C_IsUltimatedSupporter_Params
{
public:
	bool                                         IsUltimatedSupportr;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetSessionAbility
struct ABattleSupporterBP_C_GetSessionAbility_Params
{
public:
	class FName                                  AbilityLabel;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C2 (0x4C2 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.InitEquimentWeapon
struct ABattleSupporterBP_C_InitEquimentWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_140D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WeaponItemLabel;                                   // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.Debug_GetSupportCount
struct ABattleSupporterBP_C_Debug_GetSupportCount_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.Debug_GetSupportPoint
struct ABattleSupporterBP_C_Debug_GetSupportPoint_Params
{
public:
	int32                                        Point;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB4 (0xB4 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.Debug_GetUseAbilityList
struct ABattleSupporterBP_C_Debug_GetUseAbilityList_Params
{
public:
	TArray<class FText>                          AbilityLabelList;                                  // 0x0(0x10)(Parm, OutParm)
	int32                                        SelectIndex;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D1 (0x1D1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.InitializeReplayMode
struct ABattleSupporterBP_C_InitializeReplayMode_Params
{
public:
	struct FSupportCharacterData                 SupportData;                                       // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ABattlePlayerBP_C*                     Player;                                            // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SupporterRowID;                                    // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BattleCharaID;                                     // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_REPLAY_CHARA_STATUS       CharaStatus;                                       // 0xCC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetMainAbilityNameID
struct ABattleSupporterBP_C_GetMainAbilityNameID_Params
{
public:
	class FName                                  AbilityLabel;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.SetSupportCharacterVisibility
struct ABattleSupporterBP_C_SetSupportCharacterVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.CheckDiseaseSuccess
struct ABattleSupporterBP_C_CheckDiseaseSuccess_Params
{
public:
	struct FDisease                              DiseaseData;                                       // 0x0(0x54)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x54(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetRecoveryLevelRatio
struct ABattleSupporterBP_C_GetRecoveryLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_142B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseDEF;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetDamageLevelRatio
struct ABattleSupporterBP_C_GetDamageLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_142D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseATK;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetEffectSpawnPosition
struct ABattleSupporterBP_C_GetEffectSpawnPosition_Params
{
public:
	bool                                         Ground;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1436[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.BeginCharacterTurn_OLD
struct ABattleSupporterBP_C_BeginCharacterTurn_OLD_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.GetCharacterNameID
struct ABattleSupporterBP_C_GetCharacterNameID_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.JudgeCover
struct ABattleSupporterBP_C_JudgeCover_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D (0x3D - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.UpdateSupportTurn
struct ABattleSupporterBP_C_UpdateSupportTurn_Params
{
public:
	bool                                         SupportFinish;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1437[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C1 (0x4C1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.Initialize
struct ABattleSupporterBP_C_Initialize_Params
{
public:
	struct FSupportCharacterData                 SupportData;                                       // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ABattlePlayerBP_C*                     Player;                                            // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CharaStepPoint;                                    // 0xC0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SupporterRowID;                                    // 0xCC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaterSide;                                         // 0xD4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.CreateAnimCharacter
struct ABattleSupporterBP_C_CreateAnimCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.SetDamage
struct ABattleSupporterBP_C_SetDamage_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InstantDeath;                                      // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.SupportReturnDash
struct ABattleSupporterBP_C_SupportReturnDash_Params
{
public:
	bool                                         Escape;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.NoticePlayActionCommand
struct ABattleSupporterBP_C_NoticePlayActionCommand_Params
{
public:
	class FName                                  ActionCommand;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.SetDefaultLocation
struct ABattleSupporterBP_C_SetDefaultLocation_Params
{
public:
	bool                                         bInMainParty;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x971 (0x971 - 0x0)
// Function BattleSupporterBP.BattleSupporterBP_C.ExecuteUbergraph_BattleSupporterBP
struct ABattleSupporterBP_C_ExecuteUbergraph_BattleSupporterBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


