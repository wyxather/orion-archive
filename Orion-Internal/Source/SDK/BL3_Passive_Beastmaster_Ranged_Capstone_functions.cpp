// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged_Capstone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged_Capstone_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.OnActivated");

	UPassive_Beastmaster_Ranged_Capstone_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged_Capstone_C::ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone");

	UPassive_Beastmaster_Ranged_Capstone_C_ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
