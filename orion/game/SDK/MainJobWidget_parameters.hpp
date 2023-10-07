#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x191 (0x191 - 0x0)
// Function MainJobWidget.MainJobWidget_C.UpdateEquipJobInfo
struct UMainJobWidget_C_UpdateEquipJobInfo_Params
{
public:
	int32                                        SelectJobID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1201[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavePlayerCharacterData              PlayerData;                                        // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function MainJobWidget.MainJobWidget_C.OutFocus
struct UMainJobWidget_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19C (0x19C - 0x0)
// Function MainJobWidget.MainJobWidget_C.SetupWidget
struct UMainJobWidget_C_SetupWidget_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x40 (0x40 - 0x0)
// Function MainJobWidget.MainJobWidget_C.ExecuteUbergraph_MainJobWidget
struct UMainJobWidget_C_ExecuteUbergraph_MainJobWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


