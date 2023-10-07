#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x50 (0x50 - 0x0)
// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.GetTextOffset
struct UListItemWidget_Col1_4_C_GetTextOffset_Params
{
public:
	struct FVector2D                             ViewportPosition;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.InitInstance
struct UListItemWidget_Col1_4_C_InitInstance_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBB (0xBB - 0x0)
// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.Setup
struct UListItemWidget_Col1_4_C_Setup_Params
{
public:
	struct FMJListWidgetItemData                 ItemmData;                                         // 0x0(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xB9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.PreSetupProcess
struct UListItemWidget_Col1_4_C_PreSetupProcess_Params
{
public:
	struct FMJListWidgetItemData                 ListWidgetItemData;                                // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
}


