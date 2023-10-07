#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.WeaponChange
struct USequenceDirector_C_WeaponChange_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayAction
struct USequenceDirector_C_PlayAction_Params
{
public:
	class ABattleCharacterBase*                  Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleActionID;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              UniqueCharaID;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                UniqueActionID;                                    // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExceptEnforcer;                                    // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.JumpToFrame
struct USequenceDirector_C_JumpToFrame_Params
{
public:
	int32                                        Frame;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.RandomJumpToFrame
struct USequenceDirector_C_RandomJumpToFrame_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Frame;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckCounter
struct USequenceDirector_C_CheckCounter_Params
{
public:
	int32                                        Frame;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern2
struct USequenceDirector_C_CheckPattern2_Params
{
public:
	int32                                        PatternB;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern3
struct USequenceDirector_C_CheckPattern3_Params
{
public:
	int32                                        PatternB;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PatternC;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayWeaponAttack
struct USequenceDirector_C_PlayWeaponAttack_Params
{
public:
	class ABattleCharacterBase*                  Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.SetMaterialParameter_Float
struct USequenceDirector_C_SetMaterialParameter_Float_Params
{
public:
	class AEmitter*                              Particle;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ParameterName;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.SetMaterialParameter_Vector
struct USequenceDirector_C_SetMaterialParameter_Vector_Params
{
public:
	class AEmitter*                              Particle;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ParameterName;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Value;                                             // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.RegisterOnHitSE
struct USequenceDirector_C_RegisterOnHitSE_Params
{
public:
	class FName                                  SEID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayAbilitySEByIndex
struct USequenceDirector_C_PlayAbilitySEByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.JumpToMarker
struct USequenceDirector_C_JumpToMarker_Params
{
public:
	class FString                                Marker;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.RandomJumpToMarker
struct USequenceDirector_C_RandomJumpToMarker_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1371[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Marker;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckCounterToMarker
struct USequenceDirector_C_CheckCounterToMarker_Params
{
public:
	class FString                                Marker;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern2 ToMarker
struct USequenceDirector_C_CheckPattern2_ToMarker_Params
{
public:
	class FString                                PatternB;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern3 ToMarker
struct USequenceDirector_C_CheckPattern3_ToMarker_Params
{
public:
	class FString                                PatternB;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                PatternC;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecSummonCharacter
struct USequenceDirector_C_ExecSummonCharacter_Params
{
public:
	int32                                        SummonIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Random;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecSummonAbility
struct USequenceDirector_C_ExecSummonAbility_Params
{
public:
	int32                                        SummonIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelGreater
struct USequenceDirector_C_CheckBoostLevelGreater_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContainEqual;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1375[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Frame;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelGreaterToMarker
struct USequenceDirector_C_CheckBoostLevelGreaterToMarker_Params
{
public:
	int32                                        BoostLevel;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContainEqual;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1379[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Marker;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelLess
struct USequenceDirector_C_CheckBoostLevelLess_Params
{
public:
	int32                                        BorderLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContainEqual;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_137B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Frame;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelLessToMarker
struct USequenceDirector_C_CheckBoostLevelLessToMarker_Params
{
public:
	int32                                        BorderLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContainEqual;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_137D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Marker;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayVibration
struct USequenceDirector_C_PlayVibration_Params
{
public:
	class FName                                  VibrationID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVibrationPower                   Power;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecAilmentWithAbilityHit
struct USequenceDirector_C_ExecAilmentWithAbilityHit_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllAilment;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OnHit;                                             // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckAbilityHitToMarker
struct USequenceDirector_C_CheckAbilityHitToMarker_Params
{
public:
	bool                                         OnHit;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1386[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Marker;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckAbilityHitToFrame
struct USequenceDirector_C_CheckAbilityHitToFrame_Params
{
public:
	bool                                         OnHit;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1387[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Frame;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlaySE WithAbilityHit
struct USequenceDirector_C_PlaySE_WithAbilityHit_Params
{
public:
	class FName                                  SEID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnHit;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayVoice WithAbilityHit
struct USequenceDirector_C_PlayVoice_WithAbilityHit_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                VoiceType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              UniqueCharaID;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_VOICE_TYPE                UniqueVoiceType;                                   // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnHit;                                             // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayAbilitySE WithAbilityHit
struct USequenceDirector_C_PlayAbilitySE_WithAbilityHit_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnHit;                                             // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayActionWithAbilityHit
struct USequenceDirector_C_PlayActionWithAbilityHit_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleActionID;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              UniqueCharaID;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                UniqueActionID;                                    // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnHit;                                             // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayVoice
struct USequenceDirector_C_PlayVoice_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                VoiceType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              UniqueCharaID;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_VOICE_TYPE                UniqueVoiceType;                                   // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlaySE
struct USequenceDirector_C_PlaySE_Params
{
public:
	class FName                                  SEID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckDismantlingPattern
struct USequenceDirector_C_CheckDismantlingPattern_Params
{
public:
	int32                                        HPRecovery;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SPRecovery;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BPRecovery;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Buff;                                              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckDismantlingPatternToMarker
struct USequenceDirector_C_CheckDismantlingPatternToMarker_Params
{
public:
	class FString                                HPRecovery;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                SPRecovery;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BPRecovery;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Buff;                                              // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlaySessionAction
struct USequenceDirector_C_PlaySessionAction_Params
{
public:
	enum class EKSCharacterAction                BattleActionID;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.StartCharacterWarp
struct USequenceDirector_C_StartCharacterWarp_Params
{
public:
	struct FVector                               PositionOffset;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayBusinessSupportAction
struct USequenceDirector_C_PlayBusinessSupportAction_Params
{
public:
	enum class EKSCharacterAction                BattleActionID;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.ShowInfomation
struct USequenceDirector_C_ShowInfomation_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayActionForSelfOnly
struct USequenceDirector_C_PlayActionForSelfOnly_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleSelfActionID;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleOtherActionID;                               // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExceptEnforcer;                                   // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecAilment
struct USequenceDirector_C_ExecAilment_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllAilment;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23A (0x23A - 0x0)
// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
struct USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


