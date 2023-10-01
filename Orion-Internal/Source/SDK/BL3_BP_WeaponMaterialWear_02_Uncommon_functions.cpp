// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_WeaponMaterialWear_02_Uncommon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnInitializeBalanceState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent** InventoryBalanceState          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_WeaponMaterialWear_02_Uncommon_C::OnInitializeBalanceState(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnInitializeBalanceState");

	UBP_WeaponMaterialWear_02_Uncommon_C_OnInitializeBalanceState_Params params;
	params.InventoryActor = InventoryActor;
	params.InventoryBalanceState = InventoryBalanceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnInitializeComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent** InventoryBalanceState          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_WeaponMaterialWear_02_Uncommon_C::OnInitializeComponent(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnInitializeComponent");

	UBP_WeaponMaterialWear_02_Uncommon_C_OnInitializeComponent_Params params;
	params.InventoryActor = InventoryActor;
	params.InventoryBalanceState = InventoryBalanceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnBeginPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent** InventoryBalanceState          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_WeaponMaterialWear_02_Uncommon_C::OnBeginPlay(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.OnBeginPlay");

	UBP_WeaponMaterialWear_02_Uncommon_C_OnBeginPlay_Params params;
	params.InventoryActor = InventoryActor;
	params.InventoryBalanceState = InventoryBalanceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.ExecuteUbergraph_BP_WeaponMaterialWear_02_Uncommon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WeaponMaterialWear_02_Uncommon_C::ExecuteUbergraph_BP_WeaponMaterialWear_02_Uncommon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMaterialWear_02_Uncommon.BP_WeaponMaterialWear_02_Uncommon_C.ExecuteUbergraph_BP_WeaponMaterialWear_02_Uncommon");

	UBP_WeaponMaterialWear_02_Uncommon_C_ExecuteUbergraph_BP_WeaponMaterialWear_02_Uncommon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
