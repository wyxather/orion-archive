// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Transcend_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Siren_Transcend.Passive_Siren_Transcend_C.SirenActionAbilityTrigger
// (BlueprintCallable, BlueprintEvent)

void UPassive_Siren_Transcend_C::SirenActionAbilityTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Transcend.Passive_Siren_Transcend_C.SirenActionAbilityTrigger");

	UPassive_Siren_Transcend_C_SirenActionAbilityTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_Transcend.Passive_Siren_Transcend_C.ExecuteUbergraph_Passive_Siren_Transcend
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_Transcend_C::ExecuteUbergraph_Passive_Siren_Transcend(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_Transcend.Passive_Siren_Transcend_C.ExecuteUbergraph_Passive_Siren_Transcend");

	UPassive_Siren_Transcend_C_ExecuteUbergraph_Passive_Siren_Transcend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
