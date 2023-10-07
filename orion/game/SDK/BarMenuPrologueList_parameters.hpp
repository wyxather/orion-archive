#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x29 (0x29 - 0x0)
// Function BarMenuPrologueList.BarMenuPrologueList_C.UpdatePrologueList
struct UBarMenuPrologueList_C_UpdatePrologueList_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BeforeIndex;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BarMenuPrologueList.BarMenuPrologueList_C.SetPrologueCharaIndex
struct UBarMenuPrologueList_C_SetPrologueCharaIndex_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BeforeIndex;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BarMenuPrologueList.BarMenuPrologueList_C.MovePrologueCursor
struct UBarMenuPrologueList_C_MovePrologueCursor_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function BarMenuPrologueList.BarMenuPrologueList_C.Setup Prologue Chara List
struct UBarMenuPrologueList_C_Setup_Prologue_Chara_List_Params
{
public:
	TArray<int32>                                CharaID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BarMenuPrologueList.BarMenuPrologueList_C.ExecuteUbergraph_BarMenuPrologueList
struct UBarMenuPrologueList_C_ExecuteUbergraph_BarMenuPrologueList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


