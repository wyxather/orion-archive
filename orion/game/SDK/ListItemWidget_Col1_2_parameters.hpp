#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x5 (0x5 - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.SetCursorVisibility
struct UListItemWidget_Col1_2_C_SetCursorVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.OutFocus
struct UListItemWidget_Col1_2_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.Focus
struct UListItemWidget_Col1_2_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBB (0xBB - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.Setup
struct UListItemWidget_Col1_2_C_Setup_Params
{
public:
	struct FMJListWidgetItemData                 ItemmData;                                         // 0x0(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ELIST_NUM_UNIT_TYPE               UnitType;                                          // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xB9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.Set Chapter Title
struct UListItemWidget_Col1_2_C_Set_Chapter_Title_Params
{
public:
	bool                                         IsChapterTitleMode;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DA6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ChapterTitle;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.InitInstance
struct UListItemWidget_Col1_2_C_InitInstance_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.SetItemData
struct UListItemWidget_Col1_2_C_SetItemData_Params
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

// 0xD3 (0xD3 - 0x0)
// Function ListItemWidget_Col1_2.ListItemWidget_Col1_2_C.ExecuteUbergraph_ListItemWidget_Col1_2
struct UListItemWidget_Col1_2_C_ExecuteUbergraph_ListItemWidget_Col1_2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


