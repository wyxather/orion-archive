#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function ArrowButtonWBP.ArrowButtonWBP_C.SetPreset
struct UArrowButtonWBP_C_SetPreset_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ArrowButtonWBP.ArrowButtonWBP_C.SetTextList
struct UArrowButtonWBP_C_SetTextList_Params
{
public:
	TArray<class FName>                          TextList;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function ArrowButtonWBP.ArrowButtonWBP_C.SetIndex
struct UArrowButtonWBP_C_SetIndex_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ArrowButtonWBP.ArrowButtonWBP_C.GetIndex
struct UArrowButtonWBP_C_GetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ArrowButtonWBP.ArrowButtonWBP_C.ExecuteUbergraph_ArrowButtonWBP
struct UArrowButtonWBP_C_ExecuteUbergraph_ArrowButtonWBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


