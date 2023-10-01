// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SpiritOfMaya_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_SpiritOfMaya_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnRegistered");

	UAbility_SpiritOfMaya_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnHitFriendly
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitFriendlyEventDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_SpiritOfMaya_C::OnHitFriendly(const struct FHitFriendlyEventDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnHitFriendly");

	UAbility_SpiritOfMaya_C_OnHitFriendly_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.ExecuteUbergraph_Ability_SpiritOfMaya
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_SpiritOfMaya_C::ExecuteUbergraph_Ability_SpiritOfMaya(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.ExecuteUbergraph_Ability_SpiritOfMaya");

	UAbility_SpiritOfMaya_C_ExecuteUbergraph_Ability_SpiritOfMaya_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
