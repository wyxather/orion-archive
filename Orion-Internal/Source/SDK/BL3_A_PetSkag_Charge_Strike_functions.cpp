// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_Charge_Strike_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UA_PetSkag_Charge_Strike_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.Notify_Melee");

	UA_PetSkag_Charge_Strike_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.ExecuteUbergraph_A_PetSkag_Charge_Strike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_Charge_Strike_C::ExecuteUbergraph_A_PetSkag_Charge_Strike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.ExecuteUbergraph_A_PetSkag_Charge_Strike");

	UA_PetSkag_Charge_Strike_C_ExecuteUbergraph_A_PetSkag_Charge_Strike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
