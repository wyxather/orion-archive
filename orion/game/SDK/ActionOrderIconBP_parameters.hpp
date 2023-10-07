#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x18 (0x18 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.ImmediateDettach
struct UActionOrderIconBP_C_ImmediateDettach_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.GetSubIcon
struct UActionOrderIconBP_C_GetSubIcon_Params
{
public:
	class UWBP_SubActionOrderIcon_New_C*         SubIcon;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.DettachSubIcon
struct UActionOrderIconBP_C_DettachSubIcon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.Attach Sub Icon
struct UActionOrderIconBP_C_Attach_Sub_Icon_Params
{
public:
	class ABattleCharacterBase*                  SubCharacter;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Opened;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.End
struct UActionOrderIconBP_C_End_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.ResetParam
struct UActionOrderIconBP_C_ResetParam_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.Debug_ApplyParam
struct UActionOrderIconBP_C_Debug_ApplyParam_Params
{
public:
	class UTexture2D*                            OrderIcon;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconUV;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SpriteSize;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaOffset;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InvertX;                                           // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Foot;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnemy;                                           // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.SetZOrder
struct UActionOrderIconBP_C_SetZOrder_Params
{
public:
	int32                                        ZOrder;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9B (0x9B - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.CheckSpecialIcon
struct UActionOrderIconBP_C_CheckSpecialIcon_Params
{
public:
	bool                                         Special;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.SetQuestionMode
struct UActionOrderIconBP_C_SetQuestionMode_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.SetRainMode
struct UActionOrderIconBP_C_SetRainMode_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.ImmediateHidden
struct UActionOrderIconBP_C_ImmediateHidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.Setup Action Order SealAction
struct UActionOrderIconBP_C_Setup_Action_Order_SealAction_Params
{
public:
	bool                                         IsSealActionCommand;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSealActionTarget;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.Setup Action Order Bribe
struct UActionOrderIconBP_C_Setup_Action_Order_Bribe_Params
{
public:
	bool                                         IsBribeCommand;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsBribeTarget;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.GetCanvasPosition
struct UActionOrderIconBP_C_GetCanvasPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.SetupActionOrderBlind
struct UActionOrderIconBP_C_SetupActionOrderBlind_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayOrderDeBuff
struct UActionOrderIconBP_C_PlayOrderDeBuff_Params
{
public:
	bool                                         MoveIcon;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.PlayOrderBuff
struct UActionOrderIconBP_C_PlayOrderBuff_Params
{
public:
	bool                                         MoveIcon;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.InitPosition
struct UActionOrderIconBP_C_InitPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.SetCanvasPanelSlot
struct UActionOrderIconBP_C_SetCanvasPanelSlot_Params
{
public:
	class UCanvasPanelSlot*                      Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.InitActionOrderIcon
struct UActionOrderIconBP_C_InitActionOrderIcon_Params
{
public:
	bool                                         ActionOrder;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsNext;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.GetSelecterEffectVisibility
struct UActionOrderIconBP_C_GetSelecterEffectVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.GetCharacter
struct UActionOrderIconBP_C_GetCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.SetCharacter
struct UActionOrderIconBP_C_SetCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.MoveOrderIcon
struct UActionOrderIconBP_C_MoveOrderIcon_Params
{
public:
	struct FVector2D                             NewPosition;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             InitPosition;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.OverTakeOrderIcon
struct UActionOrderIconBP_C_OverTakeOrderIcon_Params
{
public:
	struct FVector2D                             NewPosition;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.BribeMoveOrderIcon
struct UActionOrderIconBP_C_BribeMoveOrderIcon_Params
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.BattleMemberChangeMoveIcon
struct UActionOrderIconBP_C_BattleMemberChangeMoveIcon_Params
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x299 (0x299 - 0x0)
// Function ActionOrderIconBP.ActionOrderIconBP_C.ExecuteUbergraph_ActionOrderIconBP
struct UActionOrderIconBP_C_ExecuteUbergraph_ActionOrderIconBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


