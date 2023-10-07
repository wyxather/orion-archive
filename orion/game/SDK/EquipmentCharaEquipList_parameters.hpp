#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.GetActive
struct UEquipmentCharaEquipList_C_GetActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetActive
struct UEquipmentCharaEquipList_C_SetActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x368 (0x368 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Refresh
struct UEquipmentCharaEquipList_C_Refresh_Params
{
public:
	bool                                         All;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC2 (0xC2 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Can Select Item
struct UEquipmentCharaEquipList_C_Can_Select_Item_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSelect;                                         // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetCurrentIndex
struct UEquipmentCharaEquipList_C_SetCurrentIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.UpdateSelectIndex
struct UEquipmentCharaEquipList_C_UpdateSelectIndex_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         End;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.PlayOutFocus
struct UEquipmentCharaEquipList_C_PlayOutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.PlayFocus
struct UEquipmentCharaEquipList_C_PlayFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.CanMoveCursor
struct UEquipmentCharaEquipList_C_CanMoveCursor_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanMove;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.CursorDown
struct UEquipmentCharaEquipList_C_CursorDown_Params
{
public:
	bool                                         ChangeIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.CursorUp
struct UEquipmentCharaEquipList_C_CursorUp_Params
{
public:
	bool                                         ChangeIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.GetCurrentIndex
struct UEquipmentCharaEquipList_C_GetCurrentIndex_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x640 (0x640 - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Create List Item Data
struct UEquipmentCharaEquipList_C_Create_List_Item_Data_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemLabel;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMJListWidgetItemData                 ListData;                                          // 0x10(0xB8)(Parm, OutParm)
};

// 0x1E (0x1E - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Setup
struct UEquipmentCharaEquipList_C_Setup_Params
{
public:
	int32                                        CharaID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.ExecuteUbergraph_EquipmentCharaEquipList
struct UEquipmentCharaEquipList_C_ExecuteUbergraph_EquipmentCharaEquipList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


