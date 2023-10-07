#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x19 (0x19 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.IsSettledOrderForEightBattle
struct ABattleActionOrderBP_C_IsSettledOrderForEightBattle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.UpdateNextOrderForDefeatChange
struct ABattleActionOrderBP_C_UpdateNextOrderForDefeatChange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD4 (0xD4 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.AddLastActionOrder
struct ABattleActionOrderBP_C_AddLastActionOrder_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FActionOrderData                      CInsertOrder;                                      // 0x10(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	int32                                        NInsetIndex;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x54(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.EndCharacterOrderForEightBattle
struct ABattleActionOrderBP_C_EndCharacterOrderForEightBattle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SubActionCharacterCount
struct ABattleActionOrderBP_C_SubActionCharacterCount_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.AddNextOrderCharacter
struct ABattleActionOrderBP_C_AddNextOrderCharacter_Params
{
public:
	class ABattleCharacterBase*                  CAddCharacter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveActionOrderByIndex
struct ABattleActionOrderBP_C_RemoveActionOrderByIndex_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcReserveList;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        NRemoveIndex;                                      // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertNextOrderForSubParty
struct ABattleActionOrderBP_C_InsertNextOrderForSubParty_Params
{
public:
	int32                                        NInsetIndex;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1275[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertCurrentOrderForSubParty
struct ABattleActionOrderBP_C_InsertCurrentOrderForSubParty_Params
{
public:
	int32                                        NInsetIndex;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_128C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x125 (0x125 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.AdjustSubPartyOrder
struct ABattleActionOrderBP_C_AdjustSubPartyOrder_Params
{
public:
	TArray<struct FActionOrderData>              TargetSubPartyOrder;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              OriginalMainPartyOrder;                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              ResultOrder;                                       // 0x20(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x94 (0x94 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateMainPartyCharacterList
struct ABattleActionOrderBP_C_CreateMainPartyCharacterList_Params
{
public:
	TArray<struct FActionOrderData>              AcOriginalOrder;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcOrderResult;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x85 (0x85 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.PlaySubIconCloseAnim
struct ABattleActionOrderBP_C_PlaySubIconCloseAnim_Params
{
public:
	TArray<struct FActionOrderData>              OrderData;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x85 (0x85 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.PlaySubIconOpenAnim
struct ABattleActionOrderBP_C_PlaySubIconOpenAnim_Params
{
public:
	TArray<struct FActionOrderData>              OrderData;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB1 (0xB1 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveNextOrderForSubParty
struct ABattleActionOrderBP_C_RemoveNextOrderForSubParty_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveCurrentOrderForSubParty
struct ABattleActionOrderBP_C_RemoveCurrentOrderForSubParty_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x13E (0x13E - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.Update Sub Icon
struct ABattleActionOrderBP_C_Update_Sub_Icon_Params
{
public:
	TArray<struct FActionOrderData>              TargetMainSortOrder;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              TargetSubSortOrder;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              OperationOrderData;                                // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         IsNextOrder;                                       // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OpenedSubIcon;                                     // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateSubPartyCharacterList
struct ABattleActionOrderBP_C_CreateSubPartyCharacterList_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcSubPartyCharacter;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionOrderData>              AcOrderResult;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         IsNextOrder;                                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11C (0x11C - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.Debug_OutputLog
struct ABattleActionOrderBP_C_Debug_OutputLog_Params
{
public:
	bool                                         Current;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SetupSubPartyPlayer
struct ABattleActionOrderBP_C_SetupSubPartyPlayer_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcSubPartyPlayer;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4F0 (0x4F0 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ChangeBattleSubParty
struct ABattleActionOrderBP_C_ChangeBattleSubParty_Params
{
public:
	class ABattleCharacterBase*                  CActiveCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefeatChange;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5E0 (0x5E0 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateSubPartyOrder
struct ABattleActionOrderBP_C_CreateSubPartyOrder_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcSubPartyCharacter;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionOrderData>              AcOriginalOrder;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcOrderResult;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcReserveList;                                     // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcBribeOrderList;                                  // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         IsNextOrder;                                       // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x51(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xAD (0xAD - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.PopOrder
struct ABattleActionOrderBP_C_PopOrder_Params
{
public:
	class ABattleCharacterBase*                  CNextCharacter;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionOrderData                      CNextOrderData;                                    // 0x8(0x40)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
};

// 0x49 (0x49 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.GetOrder
struct ABattleActionOrderBP_C_GetOrder_Params
{
public:
	class ABattleCharacterBase*                  CNextCharacter;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionOrderData                      CNextOrderData;                                    // 0x8(0x40)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
};

// 0x18C (0x18C - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SetBattleFirstActionTurn
struct ABattleActionOrderBP_C_SetBattleFirstActionTurn_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcFirstActionCharacter;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.GetEstimateActionOrderList
struct ABattleActionOrderBP_C_GetEstimateActionOrderList_Params
{
public:
	TArray<struct FActionOrderData>              AcCurrentOrder;                                    // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcNextOrder;                                       // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.GetActionOrderList
struct ABattleActionOrderBP_C_GetActionOrderList_Params
{
public:
	TArray<struct FActionOrderData>              AcCurrentOrder;                                    // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcNextOrder;                                       // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0xC4 (0xC4 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SealActionOrder
struct ABattleActionOrderBP_C_SealActionOrder_Params
{
public:
	class ABattleCharacterBase*                  CTarget;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionOrderData                      CTargetOrder;                                      // 0x8(0x40)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
	bool                                         bSealNextOrder;                                    // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x49(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x16B (0x16B - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SetEstimateActionOrderChange
struct ABattleActionOrderBP_C_SetEstimateActionOrderChange_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EACTION_ORDER_TYPE                EOrderType;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBuffOrder;                                        // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FindCharacter;                                     // 0x1A(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ExecEstimateActionOrder
struct ABattleActionOrderBP_C_ExecEstimateActionOrder_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcTargetCharacter;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EACTION_ORDER_TYPE                EOrderType;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NMoveCount;                                        // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bContainCurrentOrder;                              // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bContinueEstimate;                                 // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SetNextOrderChange
struct ABattleActionOrderBP_C_SetNextOrderChange_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2E (0x2E - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SetActionOrderChange
struct ABattleActionOrderBP_C_SetActionOrderChange_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SetCurrentOrderChange
struct ABattleActionOrderBP_C_SetCurrentOrderChange_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetNextOrderForIsOrderChange
struct ABattleActionOrderBP_C_ResetNextOrderForIsOrderChange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetCurrentOrderForIsOrderChange
struct ABattleActionOrderBP_C_ResetCurrentOrderForIsOrderChange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetActionOrderForIsOrderChange
struct ABattleActionOrderBP_C_ResetActionOrderForIsOrderChange_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ExecMoveNextOrder
struct ABattleActionOrderBP_C_ExecMoveNextOrder_Params
{
public:
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NMoveCount;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ExecMoveCurrentOrder
struct ABattleActionOrderBP_C_ExecMoveCurrentOrder_Params
{
public:
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NMoveCount;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveBreakStyle
struct ABattleActionOrderBP_C_RemoveBreakStyle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ReplaceActionOrder
struct ABattleActionOrderBP_C_ReplaceActionOrder_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcReserveList;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CReplaceCharacter;                                 // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NReplaceIndex;                                     // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReturnOrderToReserve;                             // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionOrderData                      CReplaceOrder;                                     // 0x38(0x40)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x251 (0x251 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.BribeActionOrder
struct ABattleActionOrderBP_C_BribeActionOrder_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  CTarget;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionOrderData                      CReplaceOrder;                                     // 0x10(0x40)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
	struct FActionOrderData                      CTargetOrder;                                      // 0x50(0x40)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
	bool                                         bReplaceNextOrder;                                 // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x91(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveActionOrderForEstimate
struct ABattleActionOrderBP_C_RemoveActionOrderForEstimate_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xE2 (0xE2 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveActionOrder
struct ABattleActionOrderBP_C_RemoveActionOrder_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcReserveList;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetEstimateNextOrder
struct ABattleActionOrderBP_C_ResetEstimateNextOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetEstimateCurrentOrder
struct ABattleActionOrderBP_C_ResetEstimateCurrentOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.FindCurrentOrderByCharacter
struct ABattleActionOrderBP_C_FindCurrentOrderByCharacter_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionOrderData>              AcFindOrderList;                                   // 0x8(0x10)(Parm, OutParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4E (0x4E - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.FindNextOrderByCharacter
struct ABattleActionOrderBP_C_FindNextOrderByCharacter_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionOrderData>              AcFindOrderList;                                   // 0x8(0x10)(Parm, OutParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ClearCurrentOrder
struct ABattleActionOrderBP_C_ClearCurrentOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveNextOrder
struct ABattleActionOrderBP_C_RemoveNextOrder_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEverSince;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x74 (0x74 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveCurrentOrder
struct ABattleActionOrderBP_C_RemoveCurrentOrder_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertNextOrder
struct ABattleActionOrderBP_C_InsertNextOrder_Params
{
public:
	int32                                        NInsetIndex;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FDelay;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseIcon;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.BreakActionOrder
struct ABattleActionOrderBP_C_BreakActionOrder_Params
{
public:
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertCurrentOrder
struct ABattleActionOrderBP_C_InsertCurrentOrder_Params
{
public:
	int32                                        NInsetIndex;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CTargetCharacter;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FDelay;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseIcon;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ChangeBattleTurn
struct ABattleActionOrderBP_C_ChangeBattleTurn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x228 (0x228 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.CreateActionOrder
struct ABattleActionOrderBP_C_CreateActionOrder_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcBattleCharacter;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionOrderData>              AcOrderResult;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcReserveList;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.IsCurrentOrderComplete
struct ABattleActionOrderBP_C_IsCurrentOrderComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.IsNextCharacterContinue
struct ABattleActionOrderBP_C_IsNextCharacterContinue_Params
{
public:
	class ABattleCharacterBase*                  CCheckCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4D (0x4D - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.IsNextCharacterCross
struct ABattleActionOrderBP_C_IsNextCharacterCross_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.ResetCurrentCharacterWaitTime
struct ABattleActionOrderBP_C_ResetCurrentCharacterWaitTime_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20D (0x20D - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.UpdateNextOrder
struct ABattleActionOrderBP_C_UpdateNextOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8D (0x8D - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SortPredicateByNextTime
struct ABattleActionOrderBP_C_SortPredicateByNextTime_Params
{
public:
	struct FActionOrderData                      CElementA;                                         // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	struct FActionOrderData                      CElementB;                                         // 0x40(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8D (0x8D - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SortPredicateByWaitTime
struct ABattleActionOrderBP_C_SortPredicateByWaitTime_Params
{
public:
	struct FActionOrderData                      CElementA;                                         // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	struct FActionOrderData                      CElementB;                                         // 0x40(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.CheckShuffleEnable
struct ABattleActionOrderBP_C_CheckShuffleEnable_Params
{
public:
	struct FActionOrderData                      CTargetOrder;                                      // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x258 (0x258 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.InitializeActionOrder
struct ABattleActionOrderBP_C_InitializeActionOrder_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcBattlePlayer;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABattleCharacterBase*>          AcBattleEnemy;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EBATTLE_START_TYPE                EStartType;                                        // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x112 (0x112 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.SetupFirstTurnPlayer
struct ABattleActionOrderBP_C_SetupFirstTurnPlayer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2A0 (0x2A0 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.InsertActionOrder
struct ABattleActionOrderBP_C_InsertActionOrder_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FActionOrderData                      CInsertOrder;                                      // 0x10(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	int32                                        NInsetIndex;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x54(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1D5 (0x1D5 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.MoveActionOrder
struct ABattleActionOrderBP_C_MoveActionOrder_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1307[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NMoveCount;                                        // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNextOrder;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC5 (0xC5 - 0x0)
// Function BattleActionOrderBP.BattleActionOrderBP_C.RemoveBreakStyleOrder
struct ABattleActionOrderBP_C_RemoveBreakStyleOrder_Params
{
public:
	TArray<struct FActionOrderData>              AcTargetOrder;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FActionOrderData>              AcReserveList;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


