#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x123 (0x123 - 0x0)
// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.RefreshCharacterFlipbook
struct UListItemCharacterEqpWidget_C_RefreshCharacterFlipbook_Params
{
public:
	class UFBImage*                              TargetImage;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterID;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15E (0x15E - 0x0)
// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.SetVisibleAllCharacterByBitMask
struct UListItemCharacterEqpWidget_C_SetVisibleAllCharacterByBitMask_Params
{
public:
	int32                                        VisibleBitMask;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.SetVisibleAllCharacter
struct UListItemCharacterEqpWidget_C_SetVisibleAllCharacter_Params
{
public:
	TArray<bool>                                 VisibleList;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3C (0x3C - 0x0)
// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.Tick
struct UListItemCharacterEqpWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function ListItemCharacterEqpWidget.ListItemCharacterEqpWidget_C.ExecuteUbergraph_ListItemCharacterEqpWidget
struct UListItemCharacterEqpWidget_C_ExecuteUbergraph_ListItemCharacterEqpWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


