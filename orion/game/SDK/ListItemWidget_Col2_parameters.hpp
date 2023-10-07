#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x3 (0x3 - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.ApplyShining
struct UListItemWidget_Col2_C_ApplyShining_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.InitInstance
struct UListItemWidget_Col2_C_InitInstance_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBB (0xBB - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.Setup
struct UListItemWidget_Col2_C_Setup_Params
{
public:
	struct FMJListWidgetItemData                 ItemmData;                                         // 0x0(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xB9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBD (0xBD - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.Pre Setup Process
struct UListItemWidget_Col2_C_Pre_Setup_Process_Params
{
public:
	struct FMJListWidgetItemData                 ListWidgetItemData;                                // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.OutFocus
struct UListItemWidget_Col2_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.SetShining
struct UListItemWidget_Col2_C_SetShining_Params
{
public:
	bool                                         ShiningFlag;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.Focus
struct UListItemWidget_Col2_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function ListItemWidget_Col2.ListItemWidget_Col2_C.ExecuteUbergraph_ListItemWidget_Col2
struct UListItemWidget_Col2_C_ExecuteUbergraph_ListItemWidget_Col2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


