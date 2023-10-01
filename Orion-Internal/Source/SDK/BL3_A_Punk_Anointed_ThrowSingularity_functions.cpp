// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_ThrowSingularity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Punk_Anointed_ThrowSingularity.A_Punk_Anointed_ThrowSingularity_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_ThrowSingularity_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_ThrowSingularity.A_Punk_Anointed_ThrowSingularity_C.OnBegin");

	UA_Punk_Anointed_ThrowSingularity_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_ThrowSingularity.A_Punk_Anointed_ThrowSingularity_C.Notify_Throw
// (BlueprintCallable, BlueprintEvent)

void UA_Punk_Anointed_ThrowSingularity_C::Notify_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_ThrowSingularity.A_Punk_Anointed_ThrowSingularity_C.Notify_Throw");

	UA_Punk_Anointed_ThrowSingularity_C_Notify_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_ThrowSingularity.A_Punk_Anointed_ThrowSingularity_C.ExecuteUbergraph_A_Punk_Anointed_ThrowSingularity
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_ThrowSingularity_C::ExecuteUbergraph_A_Punk_Anointed_ThrowSingularity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_ThrowSingularity.A_Punk_Anointed_ThrowSingularity_C.ExecuteUbergraph_A_Punk_Anointed_ThrowSingularity");

	UA_Punk_Anointed_ThrowSingularity_C_ExecuteUbergraph_A_Punk_Anointed_ThrowSingularity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
