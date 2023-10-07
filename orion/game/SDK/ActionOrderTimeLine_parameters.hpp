#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xBA (0xBA - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.DettachSubOrderIcon
struct UActionOrderTimeLine_C_DettachSubOrderIcon_Params
{
public:
	class UWBP_SubActionOrderIcon_New_C*         TargetIcon;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22A (0x22A - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.GetSubOrderIconFromPool
struct UActionOrderTimeLine_C_GetSubOrderIconFromPool_Params
{
public:
	class UWBP_SubActionOrderIcon_New_C*         OrderIcon;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateSubActionOrderIcon
struct UActionOrderTimeLine_C_UpdateSubActionOrderIcon_Params
{
public:
	class ABattleCharacterBaseBP_C*              ActiveCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.CheckAttachIcon
struct UActionOrderTimeLine_C_CheckAttachIcon_Params
{
public:
	class UActionOrderIcon*                      TargetIcon;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.TransitionNextTurnToCurrentTurn
struct UActionOrderTimeLine_C_TransitionNextTurnToCurrentTurn_Params
{
public:
	class UActionOrderIcon*                      TargetIcon;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC6 (0xC6 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.DettachOrderIcon
struct UActionOrderTimeLine_C_DettachOrderIcon_Params
{
public:
	class UActionOrderIcon*                      TargetIcon;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.AttachOrderIcon
struct UActionOrderTimeLine_C_AttachOrderIcon_Params
{
public:
	bool                                         IsCurrent;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_141C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionOrderIcon*                      OrderIcon;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22A (0x22A - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.GetOrderIconFromPool
struct UActionOrderTimeLine_C_GetOrderIconFromPool_Params
{
public:
	class UActionOrderIcon*                      OrderIcon;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x144 (0x144 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateCurrentOrderAnnounce
struct UActionOrderTimeLine_C_UpdateCurrentOrderAnnounce_Params
{
public:
	TArray<struct FActionOrderData>              NewOrder;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x135 (0x135 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateNextOrderAnnounce
struct UActionOrderTimeLine_C_UpdateNextOrderAnnounce_Params
{
public:
	TArray<struct FActionOrderData>              NewOrder;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x84 (0x84 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.InitOrderTimeLine
struct UActionOrderTimeLine_C_InitOrderTimeLine_Params
{
public:
	class UPanelWidget*                          TimeLineParent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNextTurn;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xEC (0xEC - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.ResetCurrentOrderIcon
struct UActionOrderTimeLine_C_ResetCurrentOrderIcon_Params
{
public:
	TArray<struct FActionOrderData>              CurrentOrder;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xE4 (0xE4 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateNextOrderIcon
struct UActionOrderTimeLine_C_UpdateNextOrderIcon_Params
{
public:
	TArray<struct FActionOrderData>              NextOrder;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xE4 (0xE4 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateCurrentOrderIcon
struct UActionOrderTimeLine_C_UpdateCurrentOrderIcon_Params
{
public:
	TArray<struct FActionOrderData>              CurrentOrder;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xFC (0xFC - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateActionOrderIcon
struct UActionOrderTimeLine_C_UpdateActionOrderIcon_Params
{
public:
	TArray<struct FActionOrderData>              ActionOrder;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x41 (0x41 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.Get Action Order Icon_DEPLECATED
struct UActionOrderTimeLine_C_Get_Action_Order_Icon_DEPLECATED_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_142E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionOrderIconBP_C*                  CurrentOrderIcon;                                  // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionOrderIconBP_C*                  NextOrderIcon;                                     // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.UpdateActiveCharacterIcon
struct UActionOrderTimeLine_C_UpdateActiveCharacterIcon_Params
{
public:
	class ABattleCharacterBaseBP_C*              ActiveCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.ClearActionCharacterPanel
struct UActionOrderTimeLine_C_ClearActionCharacterPanel_Params
{
public:
	bool                                         IsClearSubCharacter;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.PlayNextTurn
struct UActionOrderTimeLine_C_PlayNextTurn_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.Debug_AddOrderIcon
struct UActionOrderTimeLine_C_Debug_AddOrderIcon_Params
{
public:
	bool                                         IsCurrent;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ActionOrderTimeLine.ActionOrderTimeLine_C.ExecuteUbergraph_ActionOrderTimeLine
struct UActionOrderTimeLine_C_ExecuteUbergraph_ActionOrderTimeLine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


