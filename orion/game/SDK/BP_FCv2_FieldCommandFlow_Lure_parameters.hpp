#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x28 (0x28 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.GetRunningStatus
struct ABP_FCv2_FieldCommandFlow_Lure_C_GetRunningStatus_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0xD2 (0xD2 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.IsAvailable
struct ABP_FCv2_FieldCommandFlow_Lure_C_IsAvailable_Params
{
public:
	class UNpcPropertyComponent*                 TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCC (0xCC - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.Draw
struct ABP_FCv2_FieldCommandFlow_Lure_C_Draw_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2B6 (0x2B6 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.UpdateFlow
struct ABP_FCv2_FieldCommandFlow_Lure_C_UpdateFlow_Params
{
public:
	bool                                         IsInterruptPlay;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESequenceResult                   Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.GrabStateSnapshot_Internal
struct ABP_FCv2_FieldCommandFlow_Lure_C_GrabStateSnapshot_Internal_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm)
};

// 0x28 (0x28 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.ExecFollowFromEvent
struct ABP_FCv2_FieldCommandFlow_Lure_C_ExecFollowFromEvent_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.SetState
struct ABP_FCv2_FieldCommandFlow_Lure_C_SetState_Params
{
public:
	enum class EFCV2_SequenceState_Lure          NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.GetState
struct ABP_FCv2_FieldCommandFlow_Lure_C_GetState_Params
{
public:
	enum class EFCV2_SequenceState_Lure          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


