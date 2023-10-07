#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetCharmCharacter
struct AKSBattleCharacterEnemy_C_SetCharmCharacter_Params
{
public:
	bool                                         IsCharmCharacter;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetSyncAnimationCharacter
struct AKSBattleCharacterEnemy_C_SetSyncAnimationCharacter_Params
{
public:
	bool                                         IsSyncFrameForParent;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSyncFrameForChilds;                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetCharacterNPC
struct AKSBattleCharacterEnemy_C_SetCharacterNPC_Params
{
public:
	bool                                         IsCharacterNPC;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetIdleAction
struct AKSBattleCharacterEnemy_C_GetIdleAction_Params
{
public:
	enum class EKSCharacterAction                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetupSpActionType
struct AKSBattleCharacterEnemy_C_SetupSpActionType_Params
{
public:
	bool                                         IsSpAction;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetAtkType
struct AKSBattleCharacterEnemy_C_GetAtkType_Params
{
public:
	enum class EKSCharacterAction                Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetIdleType
struct AKSBattleCharacterEnemy_C_GetIdleType_Params
{
public:
	enum class EKSCharacterAction                Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetAtkType
struct AKSBattleCharacterEnemy_C_SetAtkType_Params
{
public:
	enum class EKSCharacterAction                Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetIdleType
struct AKSBattleCharacterEnemy_C_SetIdleType_Params
{
public:
	enum class EKSCharacterAction                Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.UpdateMaterialInstance
struct AKSBattleCharacterEnemy_C_UpdateMaterialInstance_Params
{
public:
	class FName                                  CustomFlipbookName;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetUpMaterialInstance
struct AKSBattleCharacterEnemy_C_SetUpMaterialInstance_Params
{
public:
	TArray<class UPaperFlipbook*>                OriginalMaterial;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.IsPlayBattleAction
struct AKSBattleCharacterEnemy_C_IsPlayBattleAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetMode
struct AKSBattleCharacterEnemy_C_GetMode_Params
{
public:
	enum class ECHARACTER_MODE                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetupActionTable
struct AKSBattleCharacterEnemy_C_SetupActionTable_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   DefaultDirection;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayActionNPC
struct AKSBattleCharacterEnemy_C_PlayActionNPC_Params
{
public:
	enum class EKSCharacterAction                Action;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Direction;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayFlipbook
struct AKSBattleCharacterEnemy_C_PlayFlipbook_Params
{
public:
	class UPaperFlipbook*                        PlayFlipbook;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Loop;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetAttackFlipbook
struct AKSBattleCharacterEnemy_C_SetAttackFlipbook_Params
{
public:
	class UPaperFlipbook*                        NewFlipbook;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetEnemyVisible
struct AKSBattleCharacterEnemy_C_SetEnemyVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetPlayDeadActionFlag
struct AKSBattleCharacterEnemy_C_SetPlayDeadActionFlag_Params
{
public:
	bool                                         PlayDeadAction;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetFlipbook
struct AKSBattleCharacterEnemy_C_SetFlipbook_Params
{
public:
	class UPaperFlipbook*                        NewFlipbook;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.UpdateBillboard
struct AKSBattleCharacterEnemy_C_UpdateBillboard_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetStateDead
struct AKSBattleCharacterEnemy_C_SetStateDead_Params
{
public:
	bool                                         DeadFlag;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayDeadAction;                                    // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ReceiveTick
struct AKSBattleCharacterEnemy_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetBattleAlphaMode
struct AKSBattleCharacterEnemy_C_SetBattleAlphaMode_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayBattleAction
struct AKSBattleCharacterEnemy_C_PlayBattleAction_Params
{
public:
	enum class EBATTLE_ACTION_TYPE               BattleAction;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StackClear;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDeadKnockBack
struct AKSBattleCharacterEnemy_C_PlayDeadKnockBack_Params
{
public:
	struct FVector                               DefaultPosition;                                   // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayBreakAnimation
struct AKSBattleCharacterEnemy_C_PlayBreakAnimation_Params
{
public:
	bool                                         Break;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.Debug_SetUIPosition
struct AKSBattleCharacterEnemy_C_Debug_SetUIPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetDamageAction
struct AKSBattleCharacterEnemy_C_SetDamageAction_Params
{
public:
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayCallEnemyEnter
struct AKSBattleCharacterEnemy_C_PlayCallEnemyEnter_Params
{
public:
	struct FVector                               DefaultPosition;                                   // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayInvadeMonsterReturn
struct AKSBattleCharacterEnemy_C_PlayInvadeMonsterReturn_Params
{
public:
	bool                                         IsPlayerSide;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayInvadeMonsterEnter
struct AKSBattleCharacterEnemy_C_PlayInvadeMonsterEnter_Params
{
public:
	bool                                         IsPlayerSide;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayCharacterAction
struct AKSBattleCharacterEnemy_C_PlayCharacterAction_Params
{
public:
	enum class EKSCharacterAction                Label;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Direction;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StackClear;                                        // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetCharacterOpacity
struct AKSBattleCharacterEnemy_C_SetCharacterOpacity_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayChangeModeFade
struct AKSBattleCharacterEnemy_C_PlayChangeModeFade_Params
{
public:
	class ABattleCharacterBase*                  OwnerCharacter;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewActionLabel;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayChangeModeTransition
struct AKSBattleCharacterEnemy_C_PlayChangeModeTransition_Params
{
public:
	class ABattleCharacterBase*                  OwnerCharacter;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewActionLabel;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetWeaponEmissiveChannel
struct AKSBattleCharacterEnemy_C_SetWeaponEmissiveChannel_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetBattleSelectMaterial
struct AKSBattleCharacterEnemy_C_SetBattleSelectMaterial_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Boost;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x771 (0x771 - 0x0)
// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ExecuteUbergraph_KSBattleCharacterEnemy
struct AKSBattleCharacterEnemy_C_ExecuteUbergraph_KSBattleCharacterEnemy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


