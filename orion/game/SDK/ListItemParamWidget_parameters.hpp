#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x50 (0x50 - 0x0)
// Function ListItemParamWidget.ListItemParamWidget_C.SetBeforeParamColor
struct UListItemParamWidget_C_SetBeforeParamColor_Params
{
public:
	TArray<int32>                                Params;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function ListItemParamWidget.ListItemParamWidget_C.UpdateParamWidgets_ShowSameParams
struct UListItemParamWidget_C_UpdateParamWidgets_ShowSameParams_Params
{
public:
	TArray<bool>                                 ShowSameParam;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function ListItemParamWidget.ListItemParamWidget_C.SetAfterEquipmentParam
struct UListItemParamWidget_C_SetAfterEquipmentParam_Params
{
public:
	TArray<int32>                                AfterEquipParam;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x48 (0x48 - 0x0)
// Function ListItemParamWidget.ListItemParamWidget_C.SetParams
struct UListItemParamWidget_C_SetParams_Params
{
public:
	struct FCharacterParam                       CharacterParam;                                    // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                        Pad_162A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CurrentEquipParam;                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4D (0x4D - 0x0)
// Function ListItemParamWidget.ListItemParamWidget_C.SetAndUpdateCharacterParam
struct UListItemParamWidget_C_SetAndUpdateCharacterParam_Params
{
public:
	struct FCharacterParam                       CharacterParam;                                    // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                        Pad_162B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CurrentEquipParam;                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function ListItemParamWidget.ListItemParamWidget_C.ExecuteUbergraph_ListItemParamWidget
struct UListItemParamWidget_C_ExecuteUbergraph_ListItemParamWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


