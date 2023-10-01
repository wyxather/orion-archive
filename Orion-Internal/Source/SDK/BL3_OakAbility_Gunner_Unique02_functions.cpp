// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_Unique02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_Unique02.OakAbility_Gunner_Unique02_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Gunner_Unique02_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique02.OakAbility_Gunner_Unique02_C.OnActivated");

	UOakAbility_Gunner_Unique02_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_Unique02.OakAbility_Gunner_Unique02_C.ExecuteUbergraph_OakAbility_Gunner_Unique02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_Unique02_C::ExecuteUbergraph_OakAbility_Gunner_Unique02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_Unique02.OakAbility_Gunner_Unique02_C.ExecuteUbergraph_OakAbility_Gunner_Unique02");

	UOakAbility_Gunner_Unique02_C_ExecuteUbergraph_OakAbility_Gunner_Unique02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
