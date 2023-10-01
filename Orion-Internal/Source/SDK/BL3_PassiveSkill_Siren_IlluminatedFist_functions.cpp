// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_IlluminatedFist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_IlluminatedFist_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnPaused");

	UPassiveSkill_Siren_IlluminatedFist_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_IlluminatedFist_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnDeactivated");

	UPassiveSkill_Siren_IlluminatedFist_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_SetDamageType
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_IlluminatedFist_C::ToothAndNail_SetDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_SetDamageType");

	UPassiveSkill_Siren_IlluminatedFist_C_ToothAndNail_SetDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_RemoveDamageType
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_IlluminatedFist_C::ToothAndNail_RemoveDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_RemoveDamageType");

	UPassiveSkill_Siren_IlluminatedFist_C_ToothAndNail_RemoveDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnAttunedElementChanged
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_IlluminatedFist_C::OnAttunedElementChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnAttunedElementChanged");

	UPassiveSkill_Siren_IlluminatedFist_C_OnAttunedElementChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_IlluminatedFist_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnActivated");

	UPassiveSkill_Siren_IlluminatedFist_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_IlluminatedFist_C::ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist");

	UPassiveSkill_Siren_IlluminatedFist_C_ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
