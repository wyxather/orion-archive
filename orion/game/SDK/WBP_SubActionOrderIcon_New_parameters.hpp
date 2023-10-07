#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetParentObject
struct UWBP_SubActionOrderIcon_New_C_SetParentObject_Params
{
public:
	class UUserWidget*                           ParentWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayCloseAnim
struct UWBP_SubActionOrderIcon_New_C_PlayCloseAnim_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.ResetParam
struct UWBP_SubActionOrderIcon_New_C_ResetParam_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.Debug_ApplyParam
struct UWBP_SubActionOrderIcon_New_C_Debug_ApplyParam_Params
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
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetZOrder
struct UWBP_SubActionOrderIcon_New_C_SetZOrder_Params
{
public:
	int32                                        ZOrder;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.ImmediateHidden
struct UWBP_SubActionOrderIcon_New_C_ImmediateHidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.Setup Action Order SealAction
struct UWBP_SubActionOrderIcon_New_C_Setup_Action_Order_SealAction_Params
{
public:
	bool                                         IsSealActionCommand;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSealActionTarget;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.Setup Action Order Bribe
struct UWBP_SubActionOrderIcon_New_C_Setup_Action_Order_Bribe_Params
{
public:
	bool                                         IsBribeCommand;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsBribeTarget;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.GetCanvasPosition
struct UWBP_SubActionOrderIcon_New_C_GetCanvasPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetupActionOrderBlind
struct UWBP_SubActionOrderIcon_New_C_SetupActionOrderBlind_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayOrderDeBuff
struct UWBP_SubActionOrderIcon_New_C_PlayOrderDeBuff_Params
{
public:
	bool                                         MoveIcon;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.PlayOrderBuff
struct UWBP_SubActionOrderIcon_New_C_PlayOrderBuff_Params
{
public:
	bool                                         MoveIcon;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.InitPosition
struct UWBP_SubActionOrderIcon_New_C_InitPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetCanvasPanelSlot
struct UWBP_SubActionOrderIcon_New_C_SetCanvasPanelSlot_Params
{
public:
	class UCanvasPanelSlot*                      Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.InitActionOrderIcon
struct UWBP_SubActionOrderIcon_New_C_InitActionOrderIcon_Params
{
public:
	bool                                         ActionOrder;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsNext;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.GetSelecterEffectVisibility
struct UWBP_SubActionOrderIcon_New_C_GetSelecterEffectVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.GetCharacter
struct UWBP_SubActionOrderIcon_New_C_GetCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.SetCharacter
struct UWBP_SubActionOrderIcon_New_C_SetCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.MoveOrderIcon
struct UWBP_SubActionOrderIcon_New_C_MoveOrderIcon_Params
{
public:
	struct FVector2D                             NewPosition;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             InitPosition;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.OverTakeOrderIcon
struct UWBP_SubActionOrderIcon_New_C_OverTakeOrderIcon_Params
{
public:
	struct FVector2D                             NewPosition;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.BribeMoveOrderIcon
struct UWBP_SubActionOrderIcon_New_C_BribeMoveOrderIcon_Params
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function WBP_SubActionOrderIcon_New.WBP_SubActionOrderIcon_New_C.ExecuteUbergraph_WBP_SubActionOrderIcon_New
struct UWBP_SubActionOrderIcon_New_C_ExecuteUbergraph_WBP_SubActionOrderIcon_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


