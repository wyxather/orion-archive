// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Sustainment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Siren_Sustainment_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.OnActivated");

	UPassive_Siren_Sustainment_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.ExecuteUbergraph_Passive_Siren_Sustainment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_Sustainment_C::ExecuteUbergraph_Passive_Siren_Sustainment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Sustainment.Passive_Siren_Sustainment_C.ExecuteUbergraph_Passive_Siren_Sustainment");

	UPassive_Siren_Sustainment_C_ExecuteUbergraph_Passive_Siren_Sustainment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
