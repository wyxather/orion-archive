#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x40 (0x40 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.SetCursorIndex
struct UEquipmentAllCharaRecommendedWidget_C_SetCursorIndex_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.GetActive
struct UEquipmentAllCharaRecommendedWidget_C_GetActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Refresh
struct UEquipmentAllCharaRecommendedWidget_C_Refresh_Params
{
public:
	bool                                         All;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeEquipListLeftRight
struct UEquipmentAllCharaRecommendedWidget_C_ChangeEquipListLeftRight_Params
{
public:
	bool                                         IsLeft;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OutFocus
struct UEquipmentAllCharaRecommendedWidget_C_OutFocus_Params
{
public:
	bool                                         UseBeforeIndex;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Focus
struct UEquipmentAllCharaRecommendedWidget_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x36 (0x36 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeEquipListUpDown
struct UEquipmentAllCharaRecommendedWidget_C_ChangeEquipListUpDown_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ChangeIndex;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.Setup
struct UEquipmentAllCharaRecommendedWidget_C_Setup_Params
{
public:
	TArray<int32>                                CharacterID;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnRightAxisX
struct UEquipmentAllCharaRecommendedWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnRightAxisY
struct UEquipmentAllCharaRecommendedWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnLeftAxisX
struct UEquipmentAllCharaRecommendedWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnLeftAxisY
struct UEquipmentAllCharaRecommendedWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnGamePadAxisX
struct UEquipmentAllCharaRecommendedWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnGamePadAxisY
struct UEquipmentAllCharaRecommendedWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.OnListPaging
struct UEquipmentAllCharaRecommendedWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.WorldMapSlowCursorX
struct UEquipmentAllCharaRecommendedWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.WorldMapSlowCursorY
struct UEquipmentAllCharaRecommendedWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.HelpScrollAxis
struct UEquipmentAllCharaRecommendedWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ExecuteUbergraph_EquipmentAllCharaRecommendedWidget
struct UEquipmentAllCharaRecommendedWidget_C_ExecuteUbergraph_EquipmentAllCharaRecommendedWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeCategoryEvent__DelegateSignature
struct UEquipmentAllCharaRecommendedWidget_C_ChangeCategoryEvent__DelegateSignature_Params
{
public:
	bool                                         IsPlus;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.DecideEvent__DelegateSignature
struct UEquipmentAllCharaRecommendedWidget_C_DecideEvent__DelegateSignature_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.ChangeCharaPartEquipEvent__DelegateSignature
struct UEquipmentAllCharaRecommendedWidget_C_ChangeCharaPartEquipEvent__DelegateSignature_Params
{
public:
	int32                                        PlayerID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CategoryIndex;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectPart;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CusorEvent__DelegateSignature
struct UEquipmentAllCharaRecommendedWidget_C_CusorEvent__DelegateSignature_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EquipmentAllCharaRecommendedWidget.EquipmentAllCharaRecommendedWidget_C.CancelEvent__DelegateSignature
struct UEquipmentAllCharaRecommendedWidget_C_CancelEvent__DelegateSignature_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


