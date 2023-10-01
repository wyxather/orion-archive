// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_Taunt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Pet_Taunt.A_Pet_Taunt_C.Notify_Taunt
// (BlueprintCallable, BlueprintEvent)

void UA_Pet_Taunt_C::Notify_Taunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_Taunt.A_Pet_Taunt_C.Notify_Taunt");

	UA_Pet_Taunt_C_Notify_Taunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_Taunt.A_Pet_Taunt_C.ExecuteUbergraph_A_Pet_Taunt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_Taunt_C::ExecuteUbergraph_A_Pet_Taunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_Taunt.A_Pet_Taunt_C.ExecuteUbergraph_A_Pet_Taunt");

	UA_Pet_Taunt_C_ExecuteUbergraph_A_Pet_Taunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
