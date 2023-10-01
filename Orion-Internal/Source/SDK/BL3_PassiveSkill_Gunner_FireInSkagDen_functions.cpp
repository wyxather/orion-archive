// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_FireInSkagDen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_FireInSkagDen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnActivated");

	UPassiveSkill_Gunner_FireInSkagDen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnEnteredIronBear_FireSkagDen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_FireInSkagDen_C::OnEnteredIronBear_FireSkagDen(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.OnEnteredIronBear_FireSkagDen");

	UPassiveSkill_Gunner_FireInSkagDen_C_OnEnteredIronBear_FireSkagDen_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_FireInSkagDen_C::ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C.ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen");

	UPassiveSkill_Gunner_FireInSkagDen_C_ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
