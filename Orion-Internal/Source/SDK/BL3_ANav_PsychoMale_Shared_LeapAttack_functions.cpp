// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_PsychoMale_Shared_LeapAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_PsychoMale_Shared_LeapAttack.ANav_PsychoMale_Shared_LeapAttack_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UANav_PsychoMale_Shared_LeapAttack_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PsychoMale_Shared_LeapAttack.ANav_PsychoMale_Shared_LeapAttack_C.MeleeStrike");

	UANav_PsychoMale_Shared_LeapAttack_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_PsychoMale_Shared_LeapAttack.ANav_PsychoMale_Shared_LeapAttack_C.ExecuteUbergraph_ANav_PsychoMale_Shared_LeapAttack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_PsychoMale_Shared_LeapAttack_C::ExecuteUbergraph_ANav_PsychoMale_Shared_LeapAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PsychoMale_Shared_LeapAttack.ANav_PsychoMale_Shared_LeapAttack_C.ExecuteUbergraph_ANav_PsychoMale_Shared_LeapAttack");

	UANav_PsychoMale_Shared_LeapAttack_C_ExecuteUbergraph_ANav_PsychoMale_Shared_LeapAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
