#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x72 (0x72 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.IsAvailable
struct ABP_FCv2_FieldCommandFlow_Steal_C_IsAvailable_Params
{
public:
	class UNpcPropertyComponent*                 TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.IsCompleted
struct ABP_FCv2_FieldCommandFlow_Steal_C_IsCompleted_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.WillPlayEvent
struct ABP_FCv2_FieldCommandFlow_Steal_C_WillPlayEvent_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE6 (0xE6 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.UpdateFlow
struct ABP_FCv2_FieldCommandFlow_Steal_C_UpdateFlow_Params
{
public:
	bool                                         IsInterruptPlay;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESequenceResult                   Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.GetState
struct ABP_FCv2_FieldCommandFlow_Steal_C_GetState_Params
{
public:
	enum class EFCV2_SequenceState_Steal         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.SetState
struct ABP_FCv2_FieldCommandFlow_Steal_C_SetState_Params
{
public:
	enum class EFCV2_SequenceState_Steal         NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


