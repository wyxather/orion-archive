// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_DoubleDowner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_DoubleDowner_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnActivated");

	UAbility_DoubleDowner_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_DoubleDowner.Ability_DoubleDowner_C.Downed
// (BlueprintCallable, BlueprintEvent)

void UAbility_DoubleDowner_C::Downed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.Downed");

	UAbility_DoubleDowner_C_Downed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_DoubleDowner.Ability_DoubleDowner_C.Upped
// (BlueprintCallable, BlueprintEvent)

void UAbility_DoubleDowner_C::Upped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.Upped");

	UAbility_DoubleDowner_C_Upped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_DoubleDowner_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnDeactivated");

	UAbility_DoubleDowner_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_DoubleDowner.Ability_DoubleDowner_C.ExecuteUbergraph_Ability_DoubleDowner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_DoubleDowner_C::ExecuteUbergraph_Ability_DoubleDowner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.ExecuteUbergraph_Ability_DoubleDowner");

	UAbility_DoubleDowner_C_ExecuteUbergraph_Ability_DoubleDowner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
