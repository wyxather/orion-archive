#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_WeaponMaterialWear_02_Uncommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnInitializeBalanceState
struct UBP_WeaponMaterialWear_02_Uncommon_C_OnInitializeBalanceState_Params
{
	class AActor**                                     InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent**            InventoryBalanceState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnInitializeComponent
struct UBP_WeaponMaterialWear_02_Uncommon_C_OnInitializeComponent_Params
{
	class AActor**                                     InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent**            InventoryBalanceState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnBeginPlay
struct UBP_WeaponMaterialWear_02_Uncommon_C_OnBeginPlay_Params
{
	class AActor**                                     InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent**            InventoryBalanceState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.ExecuteUbergraph_BP_WeaponMaterialWear_02_Uncommon
struct UBP_WeaponMaterialWear_02_Uncommon_C_ExecuteUbergraph_BP_WeaponMaterialWear_02_Uncommon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
