// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetSkag_Charge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UACharge_PetSkag_Charge_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.Notify_Melee");

	UACharge_PetSkag_Charge_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.ExecuteUbergraph_ACharge_PetSkag_Charge
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetSkag_Charge_C::ExecuteUbergraph_ACharge_PetSkag_Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.ExecuteUbergraph_ACharge_PetSkag_Charge");

	UACharge_PetSkag_Charge_C_ExecuteUbergraph_ACharge_PetSkag_Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
