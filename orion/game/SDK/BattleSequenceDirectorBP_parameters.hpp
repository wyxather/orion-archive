#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x11 (0x11 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SpecialAttachEffectRevision
struct ABattleSequenceDirectorBP_C_SpecialAttachEffectRevision_Params
{
public:
	class FName                                  EnemyGroup;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ParamIndex;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.UpdateSequencerCameraForFirstFrame
struct ABattleSequenceDirectorBP_C_UpdateSequencerCameraForFirstFrame_Params
{
public:
	class ALevelSequenceActor*                   SequenceActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      SequencerCamera;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetEightBattleInfomationText
struct ABattleSequenceDirectorBP_C_GetEightBattleInfomationText_Params
{
public:
	class FName                                  FormatText;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Result;                                            // 0x8(0x18)(Parm, OutParm)
};

// 0x3C (0x3C - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetSequencePlayerCurrentRatio
struct ABattleSequenceDirectorBP_C_GetSequencePlayerCurrentRatio_Params
{
public:
	class ULevelSequencePlayer*                  TargetPlayer;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentRatio;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetPartyChangeSequence
struct ABattleSequenceDirectorBP_C_GetPartyChangeSequence_Params
{
public:
	bool                                         bFrontToBack;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E8 (0x1E8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecPartyChangeSequencer
struct ABattleSequenceDirectorBP_C_ExecPartyChangeSequencer_Params
{
public:
	bool                                         bFrontToBack;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x448 (0x448 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAdvancedAbilityText
struct ABattleSequenceDirectorBP_C_GetAdvancedAbilityText_Params
{
public:
	class FName                                  FormatText;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              CharaID;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityIndex;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Result;                                            // 0x10(0x18)(Parm, OutParm)
};

// 0x120 (0x120 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAttachActor
struct ABattleSequenceDirectorBP_C_GetAttachActor_Params
{
public:
	class AActionCommandBase*                    CommandData;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_EFFECT_ATTACH_TYPE        AttachType;                                        // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AttachActor;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  AttachCharacter;                                   // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SettingBindingForEnforcer
struct ABattleSequenceDirectorBP_C_SettingBindingForEnforcer_Params
{
public:
	class ALevelSequenceActor*                   SequencerActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActionCommandBase*                    CommandData;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSubCommand;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SettingActionCommandPointLight
struct ABattleSequenceDirectorBP_C_SettingActionCommandPointLight_Params
{
public:
	class ALevelSequenceActor*                   SequenceActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActionCommandBase*                    CommandData;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleSequencePointLight*             PointLightActor;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BindingTag;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAreaCenterPosition
struct ABattleSequenceDirectorBP_C_GetAreaCenterPosition_Params
{
public:
	TArray<class ABattleCharacterBase*>          CharacterList;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               DefaultPosition;                                   // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CenterPosition;                                    // 0x1C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5D (0x5D - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ResetActionCommandDirector
struct ABattleSequenceDirectorBP_C_ResetActionCommandDirector_Params
{
public:
	class ABattleAbilitySequenceActor*           CSequenceActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSubCommand;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBattleResultSequence
struct ABattleSequenceDirectorBP_C_GetBattleResultSequence_Params
{
public:
	enum class EBATTLE_RESULT_TYPE               EResultType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFront;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13D8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleResultSequencer
struct ABattleSequenceDirectorBP_C_ExecBattleResultSequencer_Params
{
public:
	enum class EBATTLE_RESULT_TYPE               EResultType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFront;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x154 (0x154 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecResultDashSequencer
struct ABattleSequenceDirectorBP_C_ExecResultDashSequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x154 (0x154 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleStartDashSequencer
struct ABattleSequenceDirectorBP_C_ExecBattleStartDashSequencer_Params
{
public:
	enum class EBATTLE_START_DASH_TYPE           EStartDashType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBattleStartDashSequence
struct ABattleSequenceDirectorBP_C_GetBattleStartDashSequence_Params
{
public:
	enum class EBATTLE_START_DASH_TYPE           EStartDashType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleEventSequencer
struct ABattleSequenceDirectorBP_C_ExecBattleEventSequencer_Params
{
public:
	class ULevelSequence*                        CExecSequence;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  CEventActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.CreateAbilityEffect
struct ABattleSequenceDirectorBP_C_CreateAbilityEffect_Params
{
public:
	class UParticleSystem*                       CTemplate;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_EFFECT_ATTACH_TYPE        EAttachType;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActionCommandBase*                    CActionCommand;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bGroundEffect;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bReviveEffect;                                     // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAttachSocket;                                     // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13E6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleSequenceEmitter*>        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm)
};

// 0x3FC (0x3FC - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecActionCommandSequencer
struct ABattleSequenceDirectorBP_C_ExecActionCommandSequencer_Params
{
public:
	class AActionCommandBase*                    CActionCommand;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        CExecSequence;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleAbilitySequenceActor*           CSequenceActor;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSubCommand;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBreakSequence
struct ABattleSequenceDirectorBP_C_GetBreakSequence_Params
{
public:
	enum class EBREAK_CAMERA_TYPE                EBreakType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBreakCameraSequencer
struct ABattleSequenceDirectorBP_C_ExecBreakCameraSequencer_Params
{
public:
	enum class EBREAK_CAMERA_TYPE                EBreakType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetEncountSequence
struct ABattleSequenceDirectorBP_C_GetEncountSequence_Params
{
public:
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1413[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecEncountCameraSequencer
struct ABattleSequenceDirectorBP_C_ExecEncountCameraSequencer_Params
{
public:
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecWeatherSequencer
struct ABattleSequenceDirectorBP_C_ExecWeatherSequencer_Params
{
public:
	enum class ETimeZoneType                     ETimeZone;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_SEQUENCER_CHANGE_TYPE     EChangeType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1A8 (0x1A8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecAbilityCameraSequencer
struct ABattleSequenceDirectorBP_C_ExecAbilityCameraSequencer_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_TARGET_TYPE               ETargetType;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1419[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NSlideFrame;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActionCommandBase*                    CActionCommand;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnemySide;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsFront;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_141B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StrAbilityName;                                    // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SuspendBoostSequencer
struct ABattleSequenceDirectorBP_C_SuspendBoostSequencer_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBoostSequencer
struct ABattleSequenceDirectorBP_C_ExecBoostSequencer_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_SEQUENCER_CHANGE_TYPE     EChangeType;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetWeatherSequence
struct ABattleSequenceDirectorBP_C_GetWeatherSequence_Params
{
public:
	enum class ETimeZoneType                     ETimeZone;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_SEQUENCER_CHANGE_TYPE     EChangeType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1423[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A0 (0x2A0 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAbilityCameraSequence
struct ABattleSequenceDirectorBP_C_GetAbilityCameraSequence_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_TARGET_TYPE               ETargetType;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnemySide;                                        // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsFront;                                          // 0x7(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  StrAbilityName;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBoostSequence
struct ABattleSequenceDirectorBP_C_GetBoostSequence_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_SEQUENCER_CHANGE_TYPE     EChangeType;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBoostStart
struct ABattleSequenceDirectorBP_C_ExecBoostStart_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ChangeBoostLevel
struct ABattleSequenceDirectorBP_C_ChangeBoostLevel_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAddLevel;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecAbilityCamera
struct ABattleSequenceDirectorBP_C_ExecAbilityCamera_Params
{
public:
	int32                                        NBoostLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_TARGET_TYPE               ETargetType;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1440[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NSlideFrame;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1441[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActionCommandBase*                    CActionCommand;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnemySide;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsFront;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1443[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StrAbilityName;                                    // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBoostShutDown
struct ABattleSequenceDirectorBP_C_ExecBoostShutDown_Params
{
public:
	bool                                         bWithWeather;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecEncountCamera
struct ABattleSequenceDirectorBP_C_ExecEncountCamera_Params
{
public:
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBreakCamera
struct ABattleSequenceDirectorBP_C_ExecBreakCamera_Params
{
public:
	enum class EBREAK_CAMERA_TYPE                EBreakType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecActionCommandDirector
struct ABattleSequenceDirectorBP_C_ExecActionCommandDirector_Params
{
public:
	class AActionCommandBase*                    CActionCommand;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        CExecSequence;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenTalkCommand
struct ABattleSequenceDirectorBP_C_OpenTalkCommand_Params
{
public:
	class FName                                  TalkTextID;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Offset;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitFinish;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.PlayActionCommand
struct ABattleSequenceDirectorBP_C_PlayActionCommand_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleActionID;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.PlaySECommand
struct ABattleSequenceDirectorBP_C_PlaySECommand_Params
{
public:
	class FName                                  SEID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.PlayVibrationCommand
struct ABattleSequenceDirectorBP_C_PlayVibrationCommand_Params
{
public:
	class FName                                  VibrationID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVibrationPower                   Power;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleEvent
struct ABattleSequenceDirectorBP_C_ExecBattleEvent_Params
{
public:
	class ULevelSequence*                        CExecSequence;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  CEventActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleStartDash
struct ABattleSequenceDirectorBP_C_ExecBattleStartDash_Params
{
public:
	enum class EBATTLE_START_DASH_TYPE           EStartDashType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleResult
struct ABattleSequenceDirectorBP_C_ExecBattleResult_Params
{
public:
	enum class EBATTLE_RESULT_TYPE               EResultType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_CAMERA_TYPE               ECameraType;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFront;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenTutorialCommand
struct ABattleSequenceDirectorBP_C_OpenTutorialCommand_Params
{
public:
	enum class ETUTORIAL_TYPE                    ETutorialType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bForcedDisplay;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.InterpolationAbilityCamera
struct ABattleSequenceDirectorBP_C_InterpolationAbilityCamera_Params
{
public:
	float                                        FRatio;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.InterpolationResultCamera
struct ABattleSequenceDirectorBP_C_InterpolationResultCamera_Params
{
public:
	float                                        FRatio;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ReceiveTick
struct ABattleSequenceDirectorBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ChangeBoostLevelCommand
struct ABattleSequenceDirectorBP_C_ChangeBoostLevelCommand_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostLevel;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecSubActionCommandDirector
struct ABattleSequenceDirectorBP_C_ExecSubActionCommandDirector_Params
{
public:
	class AActionCommandBase*                    CActionCommand;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        CExecSequence;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ReleasePotentialityAction
struct ABattleSequenceDirectorBP_C_ReleasePotentialityAction_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SetBattleEnemyVisibility
struct ABattleSequenceDirectorBP_C_SetBattleEnemyVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SetAdvancedAbility
struct ABattleSequenceDirectorBP_C_SetAdvancedAbility_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_148E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NIndex;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnable;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenActionInfoFromAdvancedAbility
struct ABattleSequenceDirectorBP_C_OpenActionInfoFromAdvancedAbility_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              CharaID;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1494[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityIndex;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecPotentialityAction
struct ABattleSequenceDirectorBP_C_ExecPotentialityAction_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecPartyChange
struct ABattleSequenceDirectorBP_C_ExecPartyChange_Params
{
public:
	bool                                         bFrontToBack;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SetBattleWipeWhiteOutFlag
struct ABattleSequenceDirectorBP_C_SetBattleWipeWhiteOutFlag_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenActionInfo
struct ABattleSequenceDirectorBP_C_OpenActionInfo_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenActionInfoForEightBattle
struct ABattleSequenceDirectorBP_C_OpenActionInfoForEightBattle_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC4C (0xC4C - 0x0)
// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecuteUbergraph_BattleSequenceDirectorBP
struct ABattleSequenceDirectorBP_C_ExecuteUbergraph_BattleSequenceDirectorBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


