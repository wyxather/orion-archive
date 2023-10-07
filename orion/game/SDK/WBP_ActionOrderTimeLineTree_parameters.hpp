#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x18 (0x18 - 0x0)
// Function WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C.PlayPartyChangeAnim
struct UWBP_ActionOrderTimeLineTree_C_PlayPartyChangeAnim_Params
{
public:
	bool                                         ChangeToA;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C.GetTimeLineWidget
struct UWBP_ActionOrderTimeLineTree_C_GetTimeLineWidget_Params
{
public:
	bool                                         IsA;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionOrderTimeLine_C*                TargetWidget;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C.AttachTimeLine
struct UWBP_ActionOrderTimeLineTree_C_AttachTimeLine_Params
{
public:
	bool                                         IsA;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_126E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionOrderTimeLine_C*                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


