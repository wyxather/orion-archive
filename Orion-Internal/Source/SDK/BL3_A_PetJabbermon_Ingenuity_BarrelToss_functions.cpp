// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_Ingenuity_BarrelToss_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.Notify_Throw
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_Ingenuity_BarrelToss_C::Notify_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.Notify_Throw");

	UA_PetJabbermon_Ingenuity_BarrelToss_C_Notify_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_Ingenuity_BarrelToss_C::ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss");

	UA_PetJabbermon_Ingenuity_BarrelToss_C_ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
