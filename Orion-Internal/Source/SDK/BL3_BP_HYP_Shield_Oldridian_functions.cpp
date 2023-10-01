// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HYP_Shield_Oldridian_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StartShieldEffect
// (Event, Protected, BlueprintEvent)

void UBP_HYP_Shield_Oldridian_C::StartShieldEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StartShieldEffect");

	UBP_HYP_Shield_Oldridian_C_StartShieldEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StopShieldEffect
// (Event, Protected, BlueprintEvent)

void UBP_HYP_Shield_Oldridian_C::StopShieldEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StopShieldEffect");

	UBP_HYP_Shield_Oldridian_C_StopShieldEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.ExecuteUbergraph_BP_HYP_Shield_Oldridian
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HYP_Shield_Oldridian_C::ExecuteUbergraph_BP_HYP_Shield_Oldridian(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.ExecuteUbergraph_BP_HYP_Shield_Oldridian");

	UBP_HYP_Shield_Oldridian_C_ExecuteUbergraph_BP_HYP_Shield_Oldridian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
