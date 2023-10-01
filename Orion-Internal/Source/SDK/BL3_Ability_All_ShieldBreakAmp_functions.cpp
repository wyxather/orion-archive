// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_ShieldBreakAmp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_All_ShieldBreakAmp_C::ShieldDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldDepleted");

	UAbility_All_ShieldBreakAmp_C_ShieldDepleted_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldRefilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_All_ShieldBreakAmp_C::ShieldRefilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShieldRefilled");

	UAbility_All_ShieldBreakAmp_C_ShieldRefilled_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShotFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_ShieldBreakAmp_C::ShotFired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ShotFired");

	UAbility_All_ShieldBreakAmp_C_ShotFired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_ShieldBreakAmp_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnDeactivated");

	UAbility_All_ShieldBreakAmp_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_ShieldBreakAmp_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.OnActivated");

	UAbility_All_ShieldBreakAmp_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ExecuteUbergraph_Ability_All_ShieldBreakAmp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_ShieldBreakAmp_C::ExecuteUbergraph_Ability_All_ShieldBreakAmp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C.ExecuteUbergraph_Ability_All_ShieldBreakAmp");

	UAbility_All_ShieldBreakAmp_C_ExecuteUbergraph_Ability_All_ShieldBreakAmp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
