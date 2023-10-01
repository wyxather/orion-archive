// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_HostileAttach_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Shared_HostileAttach_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C.MeleeStrike");

	UA_PsychoMale_Shared_HostileAttach_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C.OnGrip
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Shared_HostileAttach_C::OnGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C.OnGrip");

	UA_PsychoMale_Shared_HostileAttach_C_OnGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C.ExecuteUbergraph_A_PsychoMale_Shared_HostileAttach
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_HostileAttach_C::ExecuteUbergraph_A_PsychoMale_Shared_HostileAttach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C.ExecuteUbergraph_A_PsychoMale_Shared_HostileAttach");

	UA_PsychoMale_Shared_HostileAttach_C_ExecuteUbergraph_A_PsychoMale_Shared_HostileAttach_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
