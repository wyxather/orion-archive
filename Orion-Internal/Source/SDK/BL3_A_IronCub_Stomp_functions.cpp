// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_IronCub_Stomp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompDamage
// (BlueprintCallable, BlueprintEvent)

void UA_IronCub_Stomp_C::AN_StompDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompDamage");

	UA_IronCub_Stomp_C_AN_StompDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompKnockback
// (BlueprintCallable, BlueprintEvent)

void UA_IronCub_Stomp_C::AN_StompKnockback()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompKnockback");

	UA_IronCub_Stomp_C_AN_StompKnockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_IronCub_Stomp.A_IronCub_Stomp_C.ExecuteUbergraph_A_IronCub_Stomp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_IronCub_Stomp_C::ExecuteUbergraph_A_IronCub_Stomp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_IronCub_Stomp.A_IronCub_Stomp_C.ExecuteUbergraph_A_IronCub_Stomp");

	UA_IronCub_Stomp_C_ExecuteUbergraph_A_IronCub_Stomp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
