#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x28 (0x28 - 0x0)
// Function ListItemWidget_Col3.ListItemWidget_Col3_C.SetTextColor
struct UListItemWidget_Col3_C_SetTextColor_Params
{
public:
	struct FSlateColor                           Color;                                             // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x71 (0x71 - 0x0)
// Function ListItemWidget_Col3.ListItemWidget_Col3_C.SetItemData
struct UListItemWidget_Col3_C_SetItemData_Params
{
public:
	class UTexture2D*                            IconTex;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            IconTex0;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Value0;                                            // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Value1;                                            // 0x40(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Detail;                                            // 0x58(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ELIST_ITEM_STATUS                 Status;                                            // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBB (0xBB - 0x0)
// Function ListItemWidget_Col3.ListItemWidget_Col3_C.Setup
struct UListItemWidget_Col3_C_Setup_Params
{
public:
	struct FMJListWidgetItemData                 ItemmData;                                         // 0x0(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xB9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ListItemWidget_Col3.ListItemWidget_Col3_C.InitInstance
struct UListItemWidget_Col3_C_InitInstance_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ListItemWidget_Col3.ListItemWidget_Col3_C.ExecuteUbergraph_ListItemWidget_Col3
struct UListItemWidget_Col3_C_ExecuteUbergraph_ListItemWidget_Col3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


