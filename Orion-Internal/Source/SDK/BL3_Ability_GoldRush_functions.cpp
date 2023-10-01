// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GoldRush_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GoldRush.Ability_GoldRush_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_GoldRush_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GoldRush.Ability_GoldRush_C.OnActivated");

	UAbility_GoldRush_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GoldRush.Ability_GoldRush_C.OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_GoldRush_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GoldRush.Ability_GoldRush_C.OnCausedDeath");

	UAbility_GoldRush_C_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GoldRush.Ability_GoldRush_C.OnInventoryItemPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PickedUpActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GoldRush_C::OnInventoryItemPickedUp(class AActor* PickedUpActor, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GoldRush.Ability_GoldRush_C.OnInventoryItemPickedUp");

	UAbility_GoldRush_C_OnInventoryItemPickedUp_Params params;
	params.PickedUpActor = PickedUpActor;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GoldRush.Ability_GoldRush_C.ExecuteUbergraph_Ability_GoldRush
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GoldRush_C::ExecuteUbergraph_Ability_GoldRush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GoldRush.Ability_GoldRush_C.ExecuteUbergraph_Ability_GoldRush");

	UAbility_GoldRush_C_ExecuteUbergraph_Ability_GoldRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
