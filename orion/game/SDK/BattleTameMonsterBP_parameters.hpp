#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.CheckEnableSetCharaTransform
struct ABattleTameMonsterBP_C_CheckEnableSetCharaTransform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.IsCharacterTameMonster
struct ABattleTameMonsterBP_C_IsCharacterTameMonster_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetPartnerDefaultAbility
struct ABattleTameMonsterBP_C_GetPartnerDefaultAbility_Params
{
public:
	class FName                                  AbilityName;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7E (0x7E - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.PlayBattleVoice
struct ABattleTameMonsterBP_C_PlayBattleVoice_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                EBattleVoiceType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleVoiceSetData                   CPlayCondition;                                    // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bIsSkipDiseaseCheck;                               // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x79(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetMP
struct ABattleTameMonsterBP_C_GetMP_Params
{
public:
	int32                                        MP;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MPMax;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetHP
struct ABattleTameMonsterBP_C_GetHP_Params
{
public:
	int32                                        HP;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HPMax;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD9 (0xD9 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.CheckSupportAilment
struct ABattleTameMonsterBP_C_CheckSupportAilment_Params
{
public:
	enum class ESUPPORT_AILMENT_TYPE             ESupportAilment;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSupportAbilityDataBase               CSupportAbilityData;                               // 0x8(0x40)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCurrentPosition
struct ABattleTameMonsterBP_C_GetCurrentPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterName
struct ABattleTameMonsterBP_C_GetCharacterName_Params
{
public:
	class FText                                  StrCharacterName;                                  // 0x0(0x18)(Parm, OutParm)
};

// 0x11 (0x11 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetDelayEnemyActionSE
struct ABattleTameMonsterBP_C_GetDelayEnemyActionSE_Params
{
public:
	TArray<struct FActionDelaySEData>            AcActionDelaySEData;                               // 0x0(0x10)(Parm, OutParm)
	bool                                         bEnable;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetWaitEnemyActionFrame
struct ABattleTameMonsterBP_C_GetWaitEnemyActionFrame_Params
{
public:
	int32                                        NWaitFrame;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterVoice_BattleStart
struct ABattleTameMonsterBP_C_GetCharacterVoice_BattleStart_Params
{
public:
	class FName                                  StrVoiceID;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFindVoiceID;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetOnHitDamageDiseaseRatio
struct ABattleTameMonsterBP_C_GetOnHitDamageDiseaseRatio_Params
{
public:
	class ABattleCharacterBaseBP_C*              Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBoost;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsConvergence;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EABILITY_TYPE                     AbilityType;                                       // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCompensation;                                    // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsCritical;                                        // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActionCommandBase*                    ActionCommand;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DiseaseRatio;                                      // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterAccuracy
struct ABattleTameMonsterBP_C_GetCharacterAccuracy_Params
{
public:
	int32                                        Result;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterAttack
struct ABattleTameMonsterBP_C_GetCharacterAttack_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  DamageTarget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Result;                                            // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.OnHitDamageHP
struct ABattleTameMonsterBP_C_OnHitDamageHP_Params
{
public:
	bool                                         bIsBreakAttack;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsBreakTarget;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 ETotalResist;                                      // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_RESIST                 EWeaponResist;                                     // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetMonsterEffectPosition
struct ABattleTameMonsterBP_C_GetMonsterEffectPosition_Params
{
public:
	struct FVector                               EffectPosition;                                    // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetIsInventorItem
struct ABattleTameMonsterBP_C_GetIsInventorItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.PlayCharacterAction
struct ABattleTameMonsterBP_C_PlayCharacterAction_Params
{
public:
	enum class EKSCharacterAction                ActionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.IsCharacterNPC
struct ABattleTameMonsterBP_C_IsCharacterNPC_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetCharacterNPCFlag
struct ABattleTameMonsterBP_C_GetCharacterNPCFlag_Params
{
public:
	bool                                         NPCFlag;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.InitializeReplayMode
struct ABattleTameMonsterBP_C_InitializeReplayMode_Params
{
public:
	struct FInvadeData                           InvadeData;                                        // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  InvadeRowID;                                       // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.CheckDiseaseSuccess
struct ABattleTameMonsterBP_C_CheckDiseaseSuccess_Params
{
public:
	struct FDisease                              DiseaseData;                                       // 0x0(0x54)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x54(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetInvadeTarget
struct ABattleTameMonsterBP_C_GetInvadeTarget_Params
{
public:
	TArray<class ABattleCharacterBase*>          Target;                                            // 0x0(0x10)(Parm, OutParm)
	bool                                         Enable;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetRecoveryLevelRatio
struct ABattleTameMonsterBP_C_GetRecoveryLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseDEF;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetDamageLevelRatio
struct ABattleTameMonsterBP_C_GetDamageLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1432[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseATK;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A4 (0x1A4 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetInvadeAbility
struct ABattleTameMonsterBP_C_GetInvadeAbility_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetInvadeData
struct ABattleTameMonsterBP_C_GetInvadeData_Params
{
public:
	struct FInvadeData                           EnemyData;                                         // 0x0(0x128)(Parm, OutParm)
};

// 0x4C (0x4C - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.GetEffectSpawnPosition
struct ABattleTameMonsterBP_C_GetEffectSpawnPosition_Params
{
public:
	bool                                         Ground;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_143C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.InitializeTameMonster
struct ABattleTameMonsterBP_C_InitializeTameMonster_Params
{
public:
	struct FInvadeData                           InvadeData;                                        // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  InvadeRowID;                                       // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  OwnerPlayer;                                       // 0x130(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayCharacterEnter;                                // 0x138(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPlayerSide;                                      // 0x139(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInvadeMonster;                                   // 0x13A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.LoadEnemyResource
struct ABattleTameMonsterBP_C_LoadEnemyResource_Params
{
public:
	bool                                         IsPlayerSide;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.RecoveryHP
struct ABattleTameMonsterBP_C_RecoveryHP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.RecoveryMP
struct ABattleTameMonsterBP_C_RecoveryMP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x141 (0x141 - 0x0)
// Function BattleTameMonsterBP.BattleTameMonsterBP_C.ExecuteUbergraph_BattleTameMonsterBP
struct ABattleTameMonsterBP_C_ExecuteUbergraph_BattleTameMonsterBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


