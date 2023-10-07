#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x15 (0x15 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.InitializeStatusUIIfNeeded
struct ABattleEnemyBP_C_InitializeStatusUIIfNeeded_Params
{
public:
	class UBattleEnemyStatus_C*                  NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetSuccessRateRenderPosition
struct ABattleEnemyBP_C_SetSuccessRateRenderPosition_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC1 (0xC1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.UpdateRequestSettingNextOrder_PostOrder
struct ABattleEnemyBP_C_UpdateRequestSettingNextOrder_PostOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckExecDiseaseForPostOrder
struct ABattleEnemyBP_C_CheckExecDiseaseForPostOrder_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ChangeMainWeapon
struct ABattleEnemyBP_C_ChangeMainWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  ETargetWeapon;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseWeaponTexture;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetAbilityData
struct ABattleEnemyBP_C_GetAbilityData_Params
{
public:
	int32                                        NIndex;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x264 (0x264 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeDisease
struct ABattleEnemyBP_C_OnTakeDisease_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_TYPE                     EDiseaseType;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_CATEGORY                 EDiseaseCategory;                                  // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NInvocationValue;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NBoostLevel;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNewDisease;                                     // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeNewDisease
struct ABattleEnemyBP_C_OnTakeNewDisease_Params
{
public:
	enum class EDISEASE_TYPE                     EDiseaseType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ChangeActionModeForGaldera
struct ABattleEnemyBP_C_ChangeActionModeForGaldera_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCursorPosition
struct ABattleEnemyBP_C_GetCursorPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCurrentPosition
struct ABattleEnemyBP_C_GetCurrentPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.IsCharacterNonPartsBattle
struct ABattleEnemyBP_C_IsCharacterNonPartsBattle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetTameMonsterData
struct ABattleEnemyBP_C_GetTameMonsterData_Params
{
public:
	bool                                         bTameEnable;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1414[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FTameRateBase;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OverrideEnemyDataByNPCData
struct ABattleEnemyBP_C_OverrideEnemyDataByNPCData_Params
{
public:
	struct FNPCData                              NPCData;                                           // 0x0(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x92 (0x92 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ExecRevive
struct ABattleEnemyBP_C_ExecRevive_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NReviveHP;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseReviveVoice;                                   // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.InitializeDiseaseResist
struct ABattleEnemyBP_C_InitializeDiseaseResist_Params
{
public:
	TArray<enum class EATTRIBUTE_RESIST>         DiseaseResist;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetCharacterName
struct ABattleEnemyBP_C_SetCharacterName_Params
{
public:
	class FName                                  StrCharacterNameLabel;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterName
struct ABattleEnemyBP_C_GetCharacterName_Params
{
public:
	class FText                                  StrCharacterName;                                  // 0x0(0x18)(Parm, OutParm)
};

// 0x1B5 (0x1B5 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetEquipStanceOffset
struct ABattleEnemyBP_C_GetEquipStanceOffset_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x481 (0x481 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ApplyChangeActionMode
struct ABattleEnemyBP_C_ApplyChangeActionMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x210 (0x210 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Debug_SetEnemyData
struct ABattleEnemyBP_C_Debug_SetEnemyData_Params
{
public:
	struct FEnemyData                            NewEnemyData;                                      // 0x0(0x20E)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Debug_SetActionDelaySEData
struct ABattleEnemyBP_C_Debug_SetActionDelaySEData_Params
{
public:
	TArray<struct FActionDelaySEData>            CSEData;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetActionDelaySEData
struct ABattleEnemyBP_C_Debug_GetActionDelaySEData_Params
{
public:
	TArray<struct FActionDelaySEData>            CSEData;                                           // 0x0(0x10)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x13C (0x13C - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Get Battle Idle from Equip Category
struct ABattleEnemyBP_C_Get_Battle_Idle_from_Equip_Category_Params
{
public:
	enum class EKSCharacterAction                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckWeaponWeakOpen
struct ABattleEnemyBP_C_CheckWeaponWeakOpen_Params
{
public:
	enum class EWEAPON_CATEGORY                  EWeaponCategory;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOpened;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckAttributeWeakOpen
struct ABattleEnemyBP_C_CheckAttributeWeakOpen_Params
{
public:
	enum class EATTRIBUTE_TYPE                   EAttributeType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOpened;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetWeaponResist
struct ABattleEnemyBP_C_GetWeaponResist_Params
{
public:
	enum class EWEAPON_CATEGORY                  EAttackWeapon;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCheckWeakLock;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 EResistResult;                                     // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetAttributeResist
struct ABattleEnemyBP_C_GetAttributeResist_Params
{
public:
	enum class EATTRIBUTE_TYPE                   EAttackAttribute;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCheckWeakLock;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 EResistResult;                                     // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetDelayEnemyActionSE
struct ABattleEnemyBP_C_GetDelayEnemyActionSE_Params
{
public:
	TArray<struct FActionDelaySEData>            AcActionDelaySEData;                               // 0x0(0x10)(Parm, OutParm)
	bool                                         bEnable;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetWaitEnemyActionFrame
struct ABattleEnemyBP_C_GetWaitEnemyActionFrame_Params
{
public:
	int32                                        NWaitFrame;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterVoice_BattleStart
struct ABattleEnemyBP_C_GetCharacterVoice_BattleStart_Params
{
public:
	class FName                                  StrVoiceID;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFindVoiceID;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7D (0x7D - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SurveyOpenedWeakPoint
struct ABattleEnemyBP_C_SurveyOpenedWeakPoint_Params
{
public:
	int32                                        NOpenedNum;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NWeakPointMax;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x161 (0x161 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Exec Disease Pointing Weapon
struct ABattleEnemyBP_C_Exec_Disease_Pointing_Weapon_Params
{
public:
	struct FDisease                              DiseaseData;                                       // 0x0(0x54)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRandom;                                          // 0x54(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1451[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeakLockNum;                                       // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnemyWaitTime;                                     // 0x5C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ConvertWeaponListToWeakLock
struct ABattleEnemyBP_C_ConvertWeaponListToWeakLock_Params
{
public:
	TArray<enum class EWEAPON_CATEGORY>          WeaponList;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        WeakAttributeMask;                                 // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA2 (0xA2 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckEnableStealthActionOrder
struct ABattleEnemyBP_C_CheckEnableStealthActionOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.AddEquipmentWeaponList
struct ABattleEnemyBP_C_AddEquipmentWeaponList_Params
{
public:
	int32                                        WeaponIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.UpdateWeakLock_PostOrder
struct ABattleEnemyBP_C_UpdateWeakLock_PostOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.UpdateWeakChange_PostOrder
struct ABattleEnemyBP_C_UpdateWeakChange_PostOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.UpdateShieldChange_PostOrder
struct ABattleEnemyBP_C_UpdateShieldChange_PostOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1CA (0x1CA - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeDisease_ForStealth
struct ABattleEnemyBP_C_OnTakeDisease_ForStealth_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA2 (0xA2 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckEnableStealthTarget
struct ABattleEnemyBP_C_CheckEnableStealthTarget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA2 (0xA2 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckEnableStealthCursor
struct ABattleEnemyBP_C_CheckEnableStealthCursor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1D8 (0x1D8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.On Post Remove Disease
struct ABattleEnemyBP_C_On_Post_Remove_Disease_Params
{
public:
	struct FExecDiseaseHandler                   DiseaseData;                                       // 0x0(0x8A)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_145C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x91(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetOpenedAttribute
struct ABattleEnemyBP_C_GetOpenedAttribute_Params
{
public:
	int32                                        NIndex;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   EResult;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CreateOpenedAttributeList
struct ABattleEnemyBP_C_CreateOpenedAttributeList_Params
{
public:
	int32                                        NAttributeNum;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NAttributeMax;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetDiseaseEffectPosition
struct ABattleEnemyBP_C_GetDiseaseEffectPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetDamageUIPosition
struct ABattleEnemyBP_C_GetDamageUIPosition_Params
{
public:
	int32                                        RevisionCount;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldPos;                                          // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetEnemyEffectPosition
struct ABattleEnemyBP_C_GetEnemyEffectPosition_Params
{
public:
	struct FVector                               EffectPosition;                                    // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetStatusUIPosition
struct ABattleEnemyBP_C_GetStatusUIPosition_Params
{
public:
	struct FVector                               UIPosition;                                        // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RestoreGroggy
struct ABattleEnemyBP_C_RestoreGroggy_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CommandPreview
struct ABattleEnemyBP_C_CommandPreview_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 AttributeList;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x24 (0x24 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetDefaultWarpPosition
struct ABattleEnemyBP_C_GetDefaultWarpPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.IsPlayBattleAction
struct ABattleEnemyBP_C_IsPlayBattleAction_Params
{
public:
	bool                                         Playing;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.IsCharacterReady
struct ABattleEnemyBP_C_IsCharacterReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetWeakIconFullOpen
struct ABattleEnemyBP_C_SetWeakIconFullOpen_Params
{
public:
	bool                                         bIsFullOpen;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.IsWeakIconFullOpen
struct ABattleEnemyBP_C_IsWeakIconFullOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckExecedPreparation
struct ABattleEnemyBP_C_CheckExecedPreparation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OpenWeakIcon
struct ABattleEnemyBP_C_OpenWeakIcon_Params
{
public:
	int32                                        NIndex;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRandom;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bPreparation;                                      // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bPlay2nd;                                          // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_148D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        bOpenIndex;                                        // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetBribeData
struct ABattleEnemyBP_C_GetBribeData_Params
{
public:
	bool                                         BribeEnable;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_149E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BribeMoney;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.IsCharacterNPC
struct ABattleEnemyBP_C_IsCharacterNPC_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.AddBribeCounter
struct ABattleEnemyBP_C_AddBribeCounter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetEnableWeakChangeData
struct ABattleEnemyBP_C_SetEnableWeakChangeData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetEnableShieldChangeData
struct ABattleEnemyBP_C_SetEnableShieldChangeData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RequestWeakChange
struct ABattleEnemyBP_C_RequestWeakChange_Params
{
public:
	struct FWeakChangeData                       CNewWeakChangeData;                                // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RequestShieldChange
struct ABattleEnemyBP_C_RequestShieldChange_Params
{
public:
	struct FShieldChangeData                     CNewShieldChangeData;                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RequestWeakLock
struct ABattleEnemyBP_C_RequestWeakLock_Params
{
public:
	struct FWeakLockData                         CNewWeakLockData;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetEnableWeakLockData
struct ABattleEnemyBP_C_SetEnableWeakLockData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.PlayCharacterAction
struct ABattleEnemyBP_C_PlayCharacterAction_Params
{
public:
	enum class EKSCharacterAction                ActionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CreateAnimCharacter
struct ABattleEnemyBP_C_CreateAnimCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterNPCFlag
struct ABattleEnemyBP_C_GetCharacterNPCFlag_Params
{
public:
	bool                                         NPCFlag;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x238 (0x238 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ChangeActionMode
struct ABattleEnemyBP_C_ChangeActionMode_Params
{
public:
	bool                                         bIsSpecial;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NModeIndex;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseTransition;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RemoveBreakEffect
struct ABattleEnemyBP_C_RemoveBreakEffect_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetDebugDrawParameterPosition
struct ABattleEnemyBP_C_GetDebugDrawParameterPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x112 (0x112 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.AddDiseaseForReplay
struct ABattleEnemyBP_C_AddDiseaseForReplay_Params
{
public:
	int32                                        Status;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_TYPE_BITMASK             DiseaseType;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x291 (0x291 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetDamageForEnemy
struct ABattleEnemyBP_C_SetDamageForEnemy_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               Type;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPoison;                                          // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InstantDeath;                                      // 0x7(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetMoney
struct ABattleEnemyBP_C_Debug_GetMoney_Params
{
public:
	int32                                        Money;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetJobPoint
struct ABattleEnemyBP_C_Debug_GetJobPoint_Params
{
public:
	int32                                        JobPoint;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetExp
struct ABattleEnemyBP_C_Debug_GetExp_Params
{
public:
	int32                                        Exp;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.Debug_GetUseAbilityList
struct ABattleEnemyBP_C_Debug_GetUseAbilityList_Params
{
public:
	TArray<class FText>                          AbilityLabelList;                                  // 0x0(0x10)(Parm, OutParm)
	int32                                        SelectIndex;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x430 (0x430 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.InitializeReplayMode
struct ABattleEnemyBP_C_InitializeReplayMode_Params
{
public:
	struct FEnemyData                            EnemyData;                                         // 0x0(0x20E)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_14D0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnemyRowID;                                        // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleReplayEnemyData                ReplayData;                                        // 0x218(0x1D)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetCallEnemyWeaken
struct ABattleEnemyBP_C_SetCallEnemyWeaken_Params
{
public:
	int32                                        HPRatio;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubShieldPoint;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RestoreBreak
struct ABattleEnemyBP_C_RestoreBreak_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetAttributeWeakOpen
struct ABattleEnemyBP_C_SetAttributeWeakOpen_Params
{
public:
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetWeaponWeakOpen
struct ABattleEnemyBP_C_SetWeaponWeakOpen_Params
{
public:
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckAttributeWeakOpen_OLD
struct ABattleEnemyBP_C_CheckAttributeWeakOpen_OLD_Params
{
public:
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Open;                                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CheckWeaponWeakOpen_OLD
struct ABattleEnemyBP_C_CheckWeaponWeakOpen_OLD_Params
{
public:
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Open;                                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1BD (0x1BD - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnTakeDamageHP
struct ABattleEnemyBP_C_OnTakeDamageHP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageValue;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   AttributeType;                                     // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0xF(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetRecoveryLevelRatio
struct ABattleEnemyBP_C_GetRecoveryLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseDEF;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.JudgeCover
struct ABattleEnemyBP_C_JudgeCover_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetDamageLevelRatio
struct ABattleEnemyBP_C_GetDamageLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseATK;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetDebugTameRate
struct ABattleEnemyBP_C_GetDebugTameRate_Params
{
public:
	float                                        TameRate;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.InitializeForReserve
struct ABattleEnemyBP_C_InitializeForReserve_Params
{
public:
	int32                                        TargetPriority;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x361 (0x361 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RespawnInitialize
struct ABattleEnemyBP_C_RespawnInitialize_Params
{
public:
	struct FEnemyData                            EnemyData;                                         // 0x0(0x20E)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_14E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnemyRowID;                                        // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EquipmentWeaponID;                                 // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransformEnemy;                                    // 0x220(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x210 (0x210 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetEnemyData
struct ABattleEnemyBP_C_GetEnemyData_Params
{
public:
	struct FEnemyData                            EnemyData;                                         // 0x0(0x20E)(Parm, OutParm, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetTakeDamageDiseaseRatio
struct ABattleEnemyBP_C_GetTakeDamageDiseaseRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14EB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageRatio;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetSaveEnemyData
struct ABattleEnemyBP_C_GetSaveEnemyData_Params
{
public:
	struct FSaveEnemyData                        EnemyData;                                         // 0x0(0xC)(Parm, OutParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterNameID
struct ABattleEnemyBP_C_GetCharacterNameID_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11A (0x11A - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetBreakPointDamage
struct ABattleEnemyBP_C_SetBreakPointDamage_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Break;                                             // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38C (0x38C - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.BeginBattleTurn
struct ABattleEnemyBP_C_BeginBattleTurn_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetBattleAI
struct ABattleEnemyBP_C_GetBattleAI_Params
{
public:
	class UBP_BattleAI_Base_C*                   BattleAI;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E4 (0x1E4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterOrderIcon
struct ABattleEnemyBP_C_GetCharacterOrderIcon_Params
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

// 0x354 (0x354 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetCharacterActiveIcon
struct ABattleEnemyBP_C_GetCharacterActiveIcon_Params
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
// Function BattleEnemyBP.BattleEnemyBP_C.GetEffectSpawnPosition
struct ABattleEnemyBP_C_GetEffectSpawnPosition_Params
{
public:
	bool                                         Ground;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetWeaponRegist_OLD
struct ABattleEnemyBP_C_GetWeaponRegist_OLD_Params
{
public:
	enum class EWEAPON_CATEGORY                  AttackWeapon;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckWeakLock;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 AttributeResist;                                   // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA4 (0xA4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.BeginCharacterTurn_OLD
struct ABattleEnemyBP_C_BeginCharacterTurn_OLD_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.IsShowFadePlaying
struct ABattleEnemyBP_C_IsShowFadePlaying_Params
{
public:
	bool                                         Playing;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.GetAttributeResist_OLD
struct ABattleEnemyBP_C_GetAttributeResist_OLD_Params
{
public:
	enum class EATTRIBUTE_TYPE                   AttackAttribute;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckWeakLock;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 AttributeResist;                                   // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x542 (0x542 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.InitializeEnemy
struct ABattleEnemyBP_C_InitializeEnemy_Params
{
public:
	struct FEnemyData                            EnemyData;                                         // 0x0(0x20E)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_1500[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnemyRowID;                                        // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetPriority;                                    // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_ENCOUNT_TYPE              BattleMode;                                        // 0x21C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_ECF2F8634BBB0582BA9D98B2017148FB
struct ABattleEnemyBP_C_OnLoaded_ECF2F8634BBB0582BA9D98B2017148FB_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_F5708AAA4318ED8D35680F8B575705A5
struct ABattleEnemyBP_C_OnLoaded_F5708AAA4318ED8D35680F8B575705A5_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_CF189632406811CCECD0E986C4050965
struct ABattleEnemyBP_C_OnLoaded_CF189632406811CCECD0E986C4050965_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_F9638E394117BD243ABB85A5103FB38E
struct ABattleEnemyBP_C_OnLoaded_F9638E394117BD243ABB85A5103FB38E_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_6F5A957B409A4872EDC2DD8E3B1A6B2B
struct ABattleEnemyBP_C_OnLoaded_6F5A957B409A4872EDC2DD8E3B1A6B2B_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_A8CACB7C43D931A6DFDA55910D9CE780
struct ABattleEnemyBP_C_OnLoaded_A8CACB7C43D931A6DFDA55910D9CE780_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.OnLoaded_4835FA82420C732C1024A79D680A3973
struct ABattleEnemyBP_C_OnLoaded_4835FA82420C732C1024A79D680A3973_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.FinishDeadEffect
struct ABattleEnemyBP_C_FinishDeadEffect_Params
{
public:
	class UParticleSystemComponent*              PSystem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.FinishDestructionEffect
struct ABattleEnemyBP_C_FinishDestructionEffect_Params
{
public:
	class UParticleSystemComponent*              PSystem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.CustomEvent_1
struct ABattleEnemyBP_C_CustomEvent_1_Params
{
public:
	class UParticleSystemComponent*              PSystem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.LoadChangeActionModeResource
struct ABattleEnemyBP_C_LoadChangeActionModeResource_Params
{
public:
	TArray<class UObject*>                       ObjList;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.BeginEnemyStatusUI
struct ABattleEnemyBP_C_BeginEnemyStatusUI_Params
{
public:
	class UBattleEnemyStatus_C*                  StatusUI;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetSuccessRate
struct ABattleEnemyBP_C_SetSuccessRate_Params
{
public:
	enum class EABILITY_TYPE                     AbilityType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1511[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityRatio;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationValue;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetBribePrice
struct ABattleEnemyBP_C_SetBribePrice_Params
{
public:
	enum class EABILITY_TYPE                     AbilityType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1513[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AbilityRatio;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetDamage
struct ABattleEnemyBP_C_SetDamage_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InstantDeath;                                      // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.UseMP
struct ABattleEnemyBP_C_UseMP_Params
{
public:
	int32                                        UseMP;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetSelectMaterial
struct ABattleEnemyBP_C_SetSelectMaterial_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetWeakVisible
struct ABattleEnemyBP_C_SetWeakVisible_Params
{
public:
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckGroup;                                        // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetDamage_MP
struct ABattleEnemyBP_C_SetDamage_MP_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetBoostPoint_OLD
struct ABattleEnemyBP_C_SetBoostPoint_OLD_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use;                                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetDamageForReplay
struct ABattleEnemyBP_C_SetDamageForReplay_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.SetDamageForPoison
struct ABattleEnemyBP_C_SetDamageForPoison_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ReceiveTick
struct ABattleEnemyBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RecoveryMP
struct ABattleEnemyBP_C_RecoveryMP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RecoveryHP
struct ABattleEnemyBP_C_RecoveryHP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ExecReturnSupporterAction
struct ABattleEnemyBP_C_ExecReturnSupporterAction_Params
{
public:
	bool                                         bWithReturnText;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.RecoveryBP
struct ABattleEnemyBP_C_RecoveryBP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NValue;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseRecoveryUI;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1424 (0x1424 - 0x0)
// Function BattleEnemyBP.BattleEnemyBP_C.ExecuteUbergraph_BattleEnemyBP
struct ABattleEnemyBP_C_ExecuteUbergraph_BattleEnemyBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


