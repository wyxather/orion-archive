#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x21 (0x21 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedBuyDialog
struct ABP_WeaponMasterEventFlowV2_C_OnClosedBuyDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedSupportAbilityDialog
struct ABP_WeaponMasterEventFlowV2_C_OnClosedSupportAbilityDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedAbilityDialog
struct ABP_WeaponMasterEventFlowV2_C_OnClosedAbilityDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedJobDialog
struct ABP_WeaponMasterEventFlowV2_C_OnClosedJobDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OnClosedWeaponDialog
struct ABP_WeaponMasterEventFlowV2_C_OnClosedWeaponDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.SetIsStopEvent
struct ABP_WeaponMasterEventFlowV2_C_SetIsStopEvent_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.GetIsStopEvent
struct ABP_WeaponMasterEventFlowV2_C_GetIsStopEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C8 (0x2C8 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.OpenDialog
struct ABP_WeaponMasterEventFlowV2_C_OpenDialog_Params
{
public:
	class FText                                  Caption;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Text;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          ButtonText;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           CloseFinishCallback;                               // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class FName                                  OpenSe;                                            // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonDialog*                         ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.SelectIndex
struct ABP_WeaponMasterEventFlowV2_C_SelectIndex_Params
{
public:
	struct FEventData                            EventData;                                         // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        OptionIndex;                                       // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.GetState
struct ABP_WeaponMasterEventFlowV2_C_GetState_Params
{
public:
	enum class EWeaponMasterEventV2_MainState    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.SetState
struct ABP_WeaponMasterEventFlowV2_C_SetState_Params
{
public:
	enum class EWeaponMasterEventV2_MainState    NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BA (0x1BA - 0x0)
// Function BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C.UpdateFlow
struct ABP_WeaponMasterEventFlowV2_C_UpdateFlow_Params
{
public:
	struct FEventData                            EventData;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        CurrentIndex;                                      // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextIndex;                                         // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


