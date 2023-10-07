#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x100 (0x100 - 0x0)
// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetExtraJobAbility
struct UNecessaryJPListHeaderWidget_C_SetExtraJobAbility_Params
{
public:
	struct FJobData                              JobData;                                           // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetCanAcquisitionAbility
struct UNecessaryJPListHeaderWidget_C_SetCanAcquisitionAbility_Params
{
public:
	bool                                         Acquisition;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1EB (0x1EB - 0x0)
// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetCharacterData
struct UNecessaryJPListHeaderWidget_C_SetCharacterData_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        JobID;                                             // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetNextAcquisitionJP
struct UNecessaryJPListHeaderWidget_C_SetNextAcquisitionJP_Params
{
public:
	int32                                        AcquisitionJP;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.ExecuteUbergraph_NecessaryJPListHeaderWidget
struct UNecessaryJPListHeaderWidget_C_ExecuteUbergraph_NecessaryJPListHeaderWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


