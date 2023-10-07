#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x20 (0x20 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.GetRunningStatus
struct ABP_FCv2_FieldCommandFlow_Placate_C_GetRunningStatus_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0xD2 (0xD2 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.IsAvailable
struct ABP_FCv2_FieldCommandFlow_Placate_C_IsAvailable_Params
{
public:
	class UNpcPropertyComponent*                 TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC4 (0xC4 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.ComsumeItems
struct ABP_FCv2_FieldCommandFlow_Placate_C_ComsumeItems_Params
{
public:
	struct FNPCLeadDataBase                      NPCLeadDataBase;                                   // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x27B (0x27B - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.UpdateFlow
struct ABP_FCv2_FieldCommandFlow_Placate_C_UpdateFlow_Params
{
public:
	bool                                         IsInterruptPlay;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESequenceResult                   Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.ExecFollowFromEvent
struct ABP_FCv2_FieldCommandFlow_Placate_C_ExecFollowFromEvent_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.GrabStateSnapshot_Internal
struct ABP_FCv2_FieldCommandFlow_Placate_C_GrabStateSnapshot_Internal_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.GetState
struct ABP_FCv2_FieldCommandFlow_Placate_C_GetState_Params
{
public:
	enum class EFCV2_SequenceState_Placate       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.SetState
struct ABP_FCv2_FieldCommandFlow_Placate_C_SetState_Params
{
public:
	enum class EFCV2_SequenceState_Placate       State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD2 (0xD2 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.HasRequiredItem
struct ABP_FCv2_FieldCommandFlow_Placate_C_HasRequiredItem_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.ExecuteUbergraph_BP_FCv2_FieldCommandFlow_Placate
struct ABP_FCv2_FieldCommandFlow_Placate_C_ExecuteUbergraph_BP_FCv2_FieldCommandFlow_Placate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


