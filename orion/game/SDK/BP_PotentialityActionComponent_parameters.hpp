#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x11 (0x11 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.CheckExecMasquerade
struct UBP_PotentialityActionComponent_C_CheckExecMasquerade_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x94 (0x94 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.AddPotentialityActionPoint
struct UBP_PotentialityActionComponent_C_AddPotentialityActionPoint_Params
{
public:
	int32                                        NAddActionPoint;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIgnoreAddAbility;                                 // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.ResumeUnusedPotentialityAction
struct UBP_PotentialityActionComponent_C_ResumeUnusedPotentialityAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.FinishPotentialityAction
struct UBP_PotentialityActionComponent_C_FinishPotentialityAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OnPotentialityAction_Common
struct UBP_PotentialityActionComponent_C_OnPotentialityAction_Common_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OffPotentialityAction_Common
struct UBP_PotentialityActionComponent_C_OffPotentialityAction_Common_Params
{
public:
	bool                                         bCancel;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OffPotentialityAction
struct UBP_PotentialityActionComponent_C_OffPotentialityAction_Params
{
public:
	bool                                         bCancel;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.ExecPotentialityAction
struct UBP_PotentialityActionComponent_C_ExecPotentialityAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6A (0x6A - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.OnPotentialityAction
struct UBP_PotentialityActionComponent_C_OnPotentialityAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_PotentialityActionComponent.BP_PotentialityActionComponent_C.CheckEnablePotentialityAction
struct UBP_PotentialityActionComponent_C_CheckEnablePotentialityAction_Params
{
public:
	enum class EPOTENTIALITY_ACTION_TYPE         EActionType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


