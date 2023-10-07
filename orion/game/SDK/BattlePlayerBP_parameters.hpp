#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xE1 (0xE1 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetReviveOrderType
struct ABattlePlayerBP_C_GetReviveOrderType_Params
{
public:
	enum class EACTION_ORDER_TYPE                OrderType;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetDisablePlayVoice
struct ABattlePlayerBP_C_GetDisablePlayVoice_Params
{
public:
	bool                                         IsDisablePlayVoice;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CheckEnableSetCharaTransform
struct ABattlePlayerBP_C_CheckEnableSetCharaTransform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SwitchDiseaseEffectVisibility
struct ABattlePlayerBP_C_SwitchDiseaseEffectVisibility_Params
{
public:
	bool                                         Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnHitDamageSP
struct ABattlePlayerBP_C_OnHitDamageSP_Params
{
public:
	bool                                         bIsBreakAttack;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x321 (0x321 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CanPlayVoiceWhileDisease
struct ABattlePlayerBP_C_CanPlayVoiceWhileDisease_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                BattleVoiceType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDoomUIParameter
struct ABattlePlayerBP_C_SetDoomUIParameter_Params
{
public:
	class ABattleManagerBP_C*                    BattleManager_OLD;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FExecDiseaseHandler                   DiseaseHandle;                                     // 0x8(0x8A)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1412[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleDeathCount_C*                   DoomUI;                                            // 0x98(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DeathCount;                                        // 0xA0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColorType;                                         // 0xA4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ResetSelectWeaponForMasquerade
struct ABattlePlayerBP_C_ResetSelectWeaponForMasquerade_Params
{
public:
	enum class EWEAPON_CATEGORY                  ETargetWeapon;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetEquipmentLabelList
struct ABattlePlayerBP_C_GetEquipmentLabelList_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x57 (0x57 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CheckExecDiseaseForPostOrder
struct ABattlePlayerBP_C_CheckExecDiseaseForPostOrder_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SwitchCatapultWeapon
struct ABattlePlayerBP_C_SwitchCatapultWeapon_Params
{
public:
	bool                                         bDirNext;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1418[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NWeaponIndex;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.BeginCharacterOrder
struct ABattlePlayerBP_C_BeginCharacterOrder_Params
{
public:
	float                                        FWaitTime;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.IsReleaseWeaponTexture
struct ABattlePlayerBP_C_IsReleaseWeaponTexture_Params
{
public:
	bool                                         IsRelease;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetRecoveredVoiceEnforcer
struct ABattlePlayerBP_C_GetRecoveredVoiceEnforcer_Params
{
public:
	class ABattleCharacterBase*                  InEnforcer;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  OutEnforcer;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CanPlayRecoveredVoice
struct ABattlePlayerBP_C_CanPlayRecoveredVoice_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x388 (0x388 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnTakeDisease
struct ABattlePlayerBP_C_OnTakeDisease_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_TYPE                     EDiseaseType;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_CATEGORY                 EDiseaseCategory;                                  // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NInvocationValue;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NBoostLevel;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNewDisease;                                     // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnTakeNewDisease
struct ABattlePlayerBP_C_OnTakeNewDisease_Params
{
public:
	enum class EDISEASE_TYPE                     EDiseaseType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x15B (0x15B - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.PlayBattleVoice
struct ABattlePlayerBP_C_PlayBattleVoice_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                EBattleVoiceType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleVoiceSetData                   CPlayCondition;                                    // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bIsSkipDiseaseCheck;                               // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x79(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9B (0x9B - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetEnchantAttribute
struct ABattlePlayerBP_C_GetEnchantAttribute_Params
{
public:
	enum class EWEAPON_CATEGORY                  ECheckWeapon;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   EEnchantAttribute;                                 // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCurrentPosition
struct ABattlePlayerBP_C_GetCurrentPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetReplayDiseaseMask
struct ABattlePlayerBP_C_GetReplayDiseaseMask_Params
{
public:
	int32                                        NDiseaseMask;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterJob
struct ABattlePlayerBP_C_GetCharacterJob_Params
{
public:
	enum class EJOB_TYPE                         EFirstJob;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJOB_TYPE                         ESecondJob;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableSecondJob;                                  // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterJobByRowID
struct ABattlePlayerBP_C_GetCharacterJobByRowID_Params
{
public:
	int32                                        NFirstJob;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NSecondJob;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB9 (0xB9 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetReplayStatus
struct ABattlePlayerBP_C_GetReplayStatus_Params
{
public:
	bool                                         bIsSelfTurn;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_REPLAY_CHARA_STATUS       EReplayStatus;                                     // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.UpdateSubStatusParam
struct ABattlePlayerBP_C_UpdateSubStatusParam_Params
{
public:
	bool                                         UpdateBoost;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdatePotential;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB1 (0xB1 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.IsCharacterDecondition
struct ABattlePlayerBP_C_IsCharacterDecondition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x323 (0x323 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.PlayBattleVoiceForDamage
struct ABattlePlayerBP_C_PlayBattleVoiceForDamage_Params
{
public:
	int32                                        NDamageValue;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActionCommandBase*                    CActionCommand;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SearchEquipmentAilment
struct ABattlePlayerBP_C_SearchEquipmentAilment_Params
{
public:
	enum class EAILMENT_TYPE                     AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAilmentHandler>               AilmentHandler;                                    // 0x8(0x10)(Parm, OutParm)
	bool                                         Find;                                              // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterName
struct ABattlePlayerBP_C_GetCharacterName_Params
{
public:
	class FText                                  StrCharacterName;                                  // 0x0(0x18)(Parm, OutParm)
};

// 0x1D (0x1D - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CalcDecreaseValue
struct ABattlePlayerBP_C_CalcDecreaseValue_Params
{
public:
	float                                        DecValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinHP;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RetValue;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.DecideActionForSubParty
struct ABattlePlayerBP_C_DecideActionForSubParty_Params
{
public:
	float                                        FWaitTime;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.UpdateStatusParam
struct ABattlePlayerBP_C_UpdateStatusParam_Params
{
public:
	bool                                         UpdateBoost;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdatePotential;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.TurnONStatusUI
struct ABattlePlayerBP_C_TurnONStatusUI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.TurnOffStatusUI
struct ABattlePlayerBP_C_TurnOffStatusUI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SearchEquipmentAilmentForUnique
struct ABattlePlayerBP_C_SearchEquipmentAilmentForUnique_Params
{
public:
	enum class EAILMENT_TYPE                     AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1463[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilment                              Ailment;                                           // 0x8(0x49)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1464[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilmentHandler                       AilmentHandler;                                    // 0x58(0x14)(Parm, OutParm, NoDestructor)
	bool                                         Find;                                              // 0x6C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharmEnemyLabel
struct ABattlePlayerBP_C_GetCharmEnemyLabel_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetEquipmentList
struct ABattlePlayerBP_C_GetEquipmentList_Params
{
public:
	TArray<struct FItemData>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x31 (0x31 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetEquipmentWeaponCategory
struct ABattlePlayerBP_C_GetEquipmentWeaponCategory_Params
{
public:
	TArray<enum class EWEAPON_CATEGORY>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x3D8 (0x3D8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetPartyCharaData
struct ABattlePlayerBP_C_GetPartyCharaData_Params
{
public:
	struct FPartyCharacterData                   PartyCharaData;                                    // 0x0(0x3D4)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.AddMaxHP
struct ABattlePlayerBP_C_AddMaxHP_Params
{
public:
	int32                                        NAdditiveMaxHP;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SwitchMainWeapon
struct ABattlePlayerBP_C_SwitchMainWeapon_Params
{
public:
	bool                                         bDirNext;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_146F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NWeaponIndex;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x610 (0x610 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.MakeDefaultEquipmentItem
struct ABattlePlayerBP_C_MakeDefaultEquipmentItem_Params
{
public:
	enum class EEQUIPMENT_PART                   EquipmentPart;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1470[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemData;                                          // 0x8(0x120)(Parm, OutParm)
};

// 0x2D (0x2D - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CheckEquipmentWeapon
struct ABattlePlayerBP_C_CheckEquipmentWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  ECheckWeapon;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SwitchNormalAttackWeapon
struct ABattlePlayerBP_C_SwitchNormalAttackWeapon_Params
{
public:
	bool                                         bDirNext;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1477[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NWeaponIndex;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ChangeMainWeapon
struct ABattlePlayerBP_C_ChangeMainWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  ETargetWeapon;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseWeaponTexture;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x194 (0x194 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetMainWeaponParameter
struct ABattlePlayerBP_C_GetMainWeaponParameter_Params
{
public:
	struct FCharacterParam                       EquipmentRevision;                                 // 0x0(0x34)(Parm, OutParm, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.IsCharacterDeadlySense
struct ABattlePlayerBP_C_IsCharacterDeadlySense_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.FinishPotentialityAction
struct ABattlePlayerBP_C_FinishPotentialityAction_Params
{
public:
	bool                                         bCheckResume;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.AddPotentialityActionPoint
struct ABattlePlayerBP_C_AddPotentialityActionPoint_Params
{
public:
	int32                                        NAddPoint;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIgnore;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA5 (0xA5 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnHitDamageHP
struct ABattlePlayerBP_C_OnHitDamageHP_Params
{
public:
	bool                                         bIsBreakAttack;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsBreakTarget;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 ETotalResist;                                      // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_RESIST                 EWeaponResist;                                     // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetDiseaseEffectPosition
struct ABattlePlayerBP_C_GetDiseaseEffectPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9D (0x9D - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.EndCharacterOrder
struct ABattlePlayerBP_C_EndCharacterOrder_Params
{
public:
	float                                        FWaitTime;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD9 (0xD9 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetupSubAnimationCharacter
struct ABattlePlayerBP_C_SetupSubAnimationCharacter_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcTarget;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               CCommandOffset;                                    // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecStartCharacterWarp
struct ABattlePlayerBP_C_ExecStartCharacterWarp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecEndCharacterWarp
struct ABattlePlayerBP_C_ExecEndCharacterWarp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SaveCharacterParameter
struct ABattlePlayerBP_C_SaveCharacterParameter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.PlayVictoryAction
struct ABattlePlayerBP_C_PlayVictoryAction_Params
{
public:
	bool                                         UseVictoryAction;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB3 (0xB3 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CalcAddBoostPoint
struct ABattlePlayerBP_C_CalcAddBoostPoint_Params
{
public:
	int32                                        AddPoint;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF2 (0xF2 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.AddDiseaseForReplay
struct ABattlePlayerBP_C_AddDiseaseForReplay_Params
{
public:
	int32                                        Status;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_TYPE_BITMASK             DiseaseType_;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x93 (0x93 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.On Post Remove Disease
struct ABattlePlayerBP_C_On_Post_Remove_Disease_Params
{
public:
	struct FExecDiseaseHandler                   DiseaseData;                                       // 0x0(0x8A)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_14C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x91(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD2 (0xD2 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnPreRemoveDisease
struct ABattlePlayerBP_C_OnPreRemoveDisease_Params
{
public:
	struct FExecDiseaseHandler                   DiseaseData;                                       // 0x0(0x8A)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_14C6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x91(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.Debug_GetJobPoint
struct ABattlePlayerBP_C_Debug_GetJobPoint_Params
{
public:
	int32                                        JobPoint;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.Debug_GetExp
struct ABattlePlayerBP_C_Debug_GetExp_Params
{
public:
	int32                                        Exp;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.Debug_GetMoney
struct ABattlePlayerBP_C_Debug_GetMoney_Params
{
public:
	int32                                        Money;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x569 (0x569 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.InitializeReplayMode
struct ABattlePlayerBP_C_InitializeReplayMode_Params
{
public:
	struct FBattleReplayPlayerData               ReplayData;                                        // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndRollSegmentSet                ReplaySegment;                                     // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x310 (0x310 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetOnHitDamageDiseaseRatio
struct ABattlePlayerBP_C_GetOnHitDamageDiseaseRatio_Params
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

// 0x209 (0x209 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SearchWeaponAbilityUP
struct ABattlePlayerBP_C_SearchWeaponAbilityUP_Params
{
public:
	int32                                        TotalInvocationValue;                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F9 (0x1F9 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SearchMagicAbilityUP
struct ABattlePlayerBP_C_SearchMagicAbilityUP_Params
{
public:
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalInvocationValue;                              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE4 (0xE4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.UpdateDisease_DragIn
struct ABattlePlayerBP_C_UpdateDisease_DragIn_Params
{
public:
	bool                                         Remove;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x56A (0x56A - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SearchMainWeaponAilment
struct ABattlePlayerBP_C_SearchMainWeaponAilment_Params
{
public:
	enum class EAILMENT_TYPE                     AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilment                              Ailment;                                           // 0x8(0x49)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_14CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilmentHandler                       AilmentHandler;                                    // 0x58(0x14)(Parm, OutParm, NoDestructor)
	bool                                         Find;                                              // 0x6C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xDA (0xDA - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnTakeDamageHP
struct ABattlePlayerBP_C_OnTakeDamageHP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageValue;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   AttributeType;                                     // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0xF(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4CE (0x4CE - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.UpdateDiseaseCounter
struct ABattlePlayerBP_C_UpdateDiseaseCounter_Params
{
public:
	enum class EDISEASE_TYPE                     Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Remove;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBC (0xBC - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetRecoveryLevelRatio
struct ABattlePlayerBP_C_GetRecoveryLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseDEF;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetDamageLevelRatio
struct ABattlePlayerBP_C_GetDamageLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseATK;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetTakeDamageDiseaseRatio
struct ABattlePlayerBP_C_GetTakeDamageDiseaseRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageRatio;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.InitDiseaseResist
struct ABattlePlayerBP_C_InitDiseaseResist_Params
{
public:
	TArray<struct FItemData>                     CharaEquipment;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1D9 (0x1D9 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageForPlayer
struct ABattlePlayerBP_C_SetDamageForPlayer_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPoisonDamage;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InstantDeath;                                      // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetAttributeResist_OLD
struct ABattlePlayerBP_C_GetAttributeResist_OLD_Params
{
public:
	enum class EATTRIBUTE_TYPE                   AttackAttribute;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckWeakLock;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 AttributeResist;                                   // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecDisease_Poison
struct ABattlePlayerBP_C_ExecDisease_Poison_Params
{
public:
	bool                                         ExecPoison;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetMP
struct ABattlePlayerBP_C_GetMP_Params
{
public:
	int32                                        MP;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MPMax;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetHP
struct ABattlePlayerBP_C_GetHP_Params
{
public:
	int32                                        HP;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HPMax;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetAccuracyOld
struct ABattlePlayerBP_C_GetAccuracyOld_Params
{
public:
	int32                                        Accuracy;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetEvasionOld
struct ABattlePlayerBP_C_GetEvasionOld_Params
{
public:
	int32                                        Evasion;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetAgilityOld
struct ABattlePlayerBP_C_GetAgilityOld_Params
{
public:
	int32                                        Agility;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetConcentrateOld
struct ABattlePlayerBP_C_GetConcentrateOld_Params
{
public:
	int32                                        Concentrate;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CheckLevelMax
struct ABattlePlayerBP_C_CheckLevelMax_Params
{
public:
	bool                                         LevelMax;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCommandDetail
struct ABattlePlayerBP_C_GetCommandDetail_Params
{
public:
	TArray<class FName>                          UniqueCommandDetail;                               // 0x0(0x10)(Parm, OutParm)
	class FName                                  FirstJobCommandDeatil;                             // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SecondJobCommandDetail;                            // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.PlayBattleVoice_Boost
struct ABattlePlayerBP_C_PlayBattleVoice_Boost_Params
{
public:
	int32                                        BoostLv;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterDefenseOld
struct ABattlePlayerBP_C_GetCharacterDefenseOld_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Result;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x155 (0x155 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterAttackOld
struct ABattlePlayerBP_C_GetCharacterAttackOld_Params
{
public:
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  DamageTarget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Result;                                            // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterNameID
struct ABattlePlayerBP_C_GetCharacterNameID_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCommandName
struct ABattlePlayerBP_C_GetCommandName_Params
{
public:
	TArray<class FName>                          UniqueCommandName;                                 // 0x0(0x10)(Parm, OutParm)
	class FName                                  FirstJobCommandName;                               // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SecondJobCommandName;                              // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.JudgeCover
struct ABattlePlayerBP_C_JudgeCover_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.BeginBattleTurn
struct ABattlePlayerBP_C_BeginBattleTurn_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetSupporter
struct ABattlePlayerBP_C_GetSupporter_Params
{
public:
	class ABattleSupporterBP_C*                  Supporter;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSupporter;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterLevel
struct ABattlePlayerBP_C_GetCharacterLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterOrderIcon
struct ABattlePlayerBP_C_GetCharacterOrderIcon_Params
{
public:
	class UTexture2D*                            OrderIcon;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconUV;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PixelScale;                                        // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaOffset;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InvertX;                                           // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaFootPivot;                                    // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CharacterSwitch;                                   // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterActiveIcon
struct ABattlePlayerBP_C_GetCharacterActiveIcon_Params
{
public:
	class UTexture2D*                            OrderIcon;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            FrontIcon;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconUV;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PixelScale;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaOffset;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CharaScale;                                        // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InvertX;                                           // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            WeaponIcon;                                        // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaFootPivot;                                    // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetEffectSpawnPosition
struct ABattlePlayerBP_C_GetEffectSpawnPosition_Params
{
public:
	bool                                         Ground;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3BC (0x3BC - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.BeginCharacterTurn_OLD
struct ABattlePlayerBP_C_BeginCharacterTurn_OLD_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x279 (0x279 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.GetCommandList
struct ABattlePlayerBP_C_GetCommandList_Params
{
public:
	bool                                         IncludeAdvancedAbility;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          UniqueCommandList;                                 // 0x8(0x10)(Parm, OutParm)
	TArray<class FName>                          FirstJobCommandList;                               // 0x18(0x10)(Parm, OutParm)
	TArray<class FName>                          SecondJobCommandList;                              // 0x28(0x10)(Parm, OutParm)
};

// 0x190 (0x190 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.InitAttributeResist
struct ABattlePlayerBP_C_InitAttributeResist_Params
{
public:
	TArray<struct FItemData>                     CharaEquipment;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<enum class EATTRIBUTE_RESIST>         AttributeResist;                                   // 0x10(0x10)(Parm, OutParm)
};

// 0x6DC (0x6DC - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.InitEquipmentData
struct ABattlePlayerBP_C_InitEquipmentData_Params
{
public:
	struct FSaveEquipmentData                    Equipment;                                         // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ForMasquerade;                                     // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x718 (0x718 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.Initialize
struct ABattlePlayerBP_C_Initialize_Params
{
public:
	struct FPartyCharacterData                   CharacterData;                                     // 0x0(0x3D4)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_14F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x3D8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MemberNum;                                         // 0x3DC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CharaStepPoint;                                    // 0x3E0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaterSide;                                         // 0x3EC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnLoaded_77C0C68E4E9D6EF680DE1AAB26F62989
struct ABattlePlayerBP_C_OnLoaded_77C0C68E4E9D6EF680DE1AAB26F62989_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnLoaded_F5FBC5B74DA43B905CD8659E682C847E
struct ABattlePlayerBP_C_OnLoaded_F5FBC5B74DA43B905CD8659E682C847E_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.OnLoaded_EADE36EE4527E711872AD48813213439
struct ABattlePlayerBP_C_OnLoaded_EADE36EE4527E711872AD48813213439_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDamage
struct ABattlePlayerBP_C_SetDamage_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InstantDeath;                                      // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.UseMP
struct ABattlePlayerBP_C_UseMP_Params
{
public:
	int32                                        UseMP;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDamage_MP
struct ABattlePlayerBP_C_SetDamage_MP_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDamage_BP
struct ABattlePlayerBP_C_SetDamage_BP_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageHPMax
struct ABattlePlayerBP_C_SetDamageHPMax_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HPMinimum;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRatio;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageForPoison
struct ABattlePlayerBP_C_SetDamageForPoison_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryMP
struct ABattlePlayerBP_C_RecoveryMP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryHP
struct ABattlePlayerBP_C_RecoveryHP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageBPMax
struct ABattlePlayerBP_C_SetDamageBPMax_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecRevive
struct ABattlePlayerBP_C_ExecRevive_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NReviveHP;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseReviveVoice;                                   // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryBP
struct ABattlePlayerBP_C_RecoveryBP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseRecoveryUI;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryPotentialityActionPoint
struct ABattlePlayerBP_C_RecoveryPotentialityActionPoint_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseRecoveryUI;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.BeginPlayerUI
struct ABattlePlayerBP_C_BeginPlayerUI_Params
{
public:
	class UBattleSelectPlayerStatus_C*           StatusUI;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_BattleSelectSubPlayerStatus_C*    SubStatusUI;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleDamageNumber_C*                 DamageUI;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CreateAnimCharacter
struct ABattlePlayerBP_C_CreateAnimCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ChangeAnimCharacter
struct ABattlePlayerBP_C_ChangeAnimCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HidePotUI;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.PlayDragInMove
struct ABattlePlayerBP_C_PlayDragInMove_Params
{
public:
	enum class EBATTLE_DRAG_IN_TYPE              DragInType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ResumeMasquerade
struct ABattlePlayerBP_C_ResumeMasquerade_Params
{
public:
	bool                                         WaitAction;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.CreateSubAnimationCharacter
struct ABattlePlayerBP_C_CreateSubAnimationCharacter_Params
{
public:
	int32                                        NCreateNum;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.Debug_ChangeSecondJob
struct ABattlePlayerBP_C_Debug_ChangeSecondJob_Params
{
public:
	int32                                        SecondJobID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecBlowAwayAction
struct ABattlePlayerBP_C_ExecBlowAwayAction_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NInvocationTurn;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecDragInAction
struct ABattlePlayerBP_C_ExecDragInAction_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NInvocationTurn;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DRAG_IN_TYPE              EDragInType;                                       // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecCharmAction
struct ABattlePlayerBP_C_ExecCharmAction_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.SetDefaultLocation
struct ABattlePlayerBP_C_SetDefaultLocation_Params
{
public:
	bool                                         bInMainParty;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22E8 (0x22E8 - 0x0)
// Function BattlePlayerBP.BattlePlayerBP_C.ExecuteUbergraph_BattlePlayerBP
struct ABattlePlayerBP_C_ExecuteUbergraph_BattlePlayerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


