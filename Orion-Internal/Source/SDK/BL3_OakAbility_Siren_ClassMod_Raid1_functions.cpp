// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Raid1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Raid1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.OnActivated");

	UOakAbility_Siren_ClassMod_Raid1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.SirenCMRaid1_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Raid1_C::SirenCMRaid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.SirenCMRaid1_OnActionSkillActivated");

	UOakAbility_Siren_ClassMod_Raid1_C_SirenCMRaid1_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Raid1_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1");

	UOakAbility_Siren_ClassMod_Raid1_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
