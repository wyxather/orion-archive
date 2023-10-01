// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Infusion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.GetShotModifier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWeaponShotModifier*     res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_Infusion_C::GetShotModifier(class UWeaponShotModifier** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.GetShotModifier");

	UPassive_Siren_Infusion_C_GetShotModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.AddShotModifier
// (BlueprintCallable, BlueprintEvent)

void UPassive_Siren_Infusion_C::AddShotModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.AddShotModifier");

	UPassive_Siren_Infusion_C_AddShotModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.RemoveAllShotModifiers
// (BlueprintCallable, BlueprintEvent)

void UPassive_Siren_Infusion_C::RemoveAllShotModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.RemoveAllShotModifiers");

	UPassive_Siren_Infusion_C_RemoveAllShotModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.OnAttunedElementChanged
// (Event, Protected, BlueprintEvent)

void UPassive_Siren_Infusion_C::OnAttunedElementChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.OnAttunedElementChanged");

	UPassive_Siren_Infusion_C_OnAttunedElementChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.ExecuteUbergraph_Passive_Siren_Infusion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_Infusion_C::ExecuteUbergraph_Passive_Siren_Infusion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.ExecuteUbergraph_Passive_Siren_Infusion");

	UPassive_Siren_Infusion_C_ExecuteUbergraph_Passive_Siren_Infusion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
