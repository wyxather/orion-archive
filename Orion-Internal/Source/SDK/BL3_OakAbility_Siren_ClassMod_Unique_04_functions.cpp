// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_04_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.SirenUnique04_ActivatedRushBonus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RushStacks                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_04_C::SirenUnique04_ActivatedRushBonus(int RushStacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.SirenUnique04_ActivatedRushBonus");

	UOakAbility_Siren_ClassMod_Unique_04_C_SirenUnique04_ActivatedRushBonus_Params params;
	params.RushStacks = RushStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.TickDownRushStacks
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Unique_04_C::TickDownRushStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.TickDownRushStacks");

	UOakAbility_Siren_ClassMod_Unique_04_C_TickDownRushStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Unique_04_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.OnActivated");

	UOakAbility_Siren_ClassMod_Unique_04_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_04_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04");

	UOakAbility_Siren_ClassMod_Unique_04_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
