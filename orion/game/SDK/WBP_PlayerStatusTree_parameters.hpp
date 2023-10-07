#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x28 (0x28 - 0x0)
// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.AttachSubPartyStatus
struct UWBP_PlayerStatusTree_C_AttachSubPartyStatus_Params
{
public:
	bool                                         IsA;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1273[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_BattleSelectSubPlayerStatus_C*    StatusUI;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.GetStatusUI
struct UWBP_PlayerStatusTree_C_GetStatusUI_Params
{
public:
	bool                                         IsA;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1274[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleSelectPlayerStatus_C*>   StatusUI;                                          // 0x8(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.AttachPartyStatus
struct UWBP_PlayerStatusTree_C_AttachPartyStatus_Params
{
public:
	bool                                         IsA;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleSelectPlayerStatus_C*           StatusUI;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.PlayPartyChangeAnim
struct UWBP_PlayerStatusTree_C_PlayPartyChangeAnim_Params
{
public:
	bool                                         ChangeToA;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_PlayerStatusTree.WBP_PlayerStatusTree_C.ExecuteUbergraph_WBP_PlayerStatusTree
struct UWBP_PlayerStatusTree_C_ExecuteUbergraph_WBP_PlayerStatusTree_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


