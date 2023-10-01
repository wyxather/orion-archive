#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_WeaponMaterialWear_00_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WeaponMaterialWear_00_Master.BP_WeaponMaterialWear_00_Master_C.OnInitializeBalanceState
struct UBP_WeaponMaterialWear_00_Master_C_OnInitializeBalanceState_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             InventoryBalanceState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WeaponMaterialWear_00_Master.BP_WeaponMaterialWear_00_Master_C.OnInitializeComponent
struct UBP_WeaponMaterialWear_00_Master_C_OnInitializeComponent_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             InventoryBalanceState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WeaponMaterialWear_00_Master.BP_WeaponMaterialWear_00_Master_C.OnBeginPlay
struct UBP_WeaponMaterialWear_00_Master_C_OnBeginPlay_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             InventoryBalanceState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WeaponMaterialWear_00_Master.BP_WeaponMaterialWear_00_Master_C.ExecuteUbergraph_BP_WeaponMaterialWear_00_Master
struct UBP_WeaponMaterialWear_00_Master_C_ExecuteUbergraph_BP_WeaponMaterialWear_00_Master_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
