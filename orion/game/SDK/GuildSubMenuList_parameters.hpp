#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.GetAcquisitionJobAbility
struct UGuildSubMenuList_C_GetAcquisitionJobAbility_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.GetCurrentIndex
struct UGuildSubMenuList_C_GetCurrentIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.SetupText
struct UGuildSubMenuList_C_SetupText_Params
{
public:
	TArray<class FName>                          Label;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.IsActive
struct UGuildSubMenuList_C_IsActive_Params
{
public:
	bool                                         ActiveFlag;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.GetCursorPosition
struct UGuildSubMenuList_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.CursorRight
struct UGuildSubMenuList_C_CursorRight_Params
{
public:
	bool                                         MenuDecide;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.CursorLeft
struct UGuildSubMenuList_C_CursorLeft_Params
{
public:
	bool                                         MenuCancel;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.DecideMenu
struct UGuildSubMenuList_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.CancelMenu
struct UGuildSubMenuList_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.GetMenuRelativePos
struct UGuildSubMenuList_C_GetMenuRelativePos_Params
{
public:
	struct FVector2D                             RelativePos;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.ChangeSelectIndex
struct UGuildSubMenuList_C_ChangeSelectIndex_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.OutFocus
struct UGuildSubMenuList_C_OutFocus_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUp;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnimFast;                                          // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.Focus
struct UGuildSubMenuList_C_Focus_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnimFast;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.Open
struct UGuildSubMenuList_C_Open_Params
{
public:
	bool                                         ReOpen;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.PlayOpenAnim
struct UGuildSubMenuList_C_PlayOpenAnim_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GuildSubMenuList.GuildSubMenuList_C.ExecuteUbergraph_GuildSubMenuList
struct UGuildSubMenuList_C_ExecuteUbergraph_GuildSubMenuList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


