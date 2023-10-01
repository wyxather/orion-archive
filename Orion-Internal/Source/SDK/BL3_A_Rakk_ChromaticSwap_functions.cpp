// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_ChromaticSwap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_ChromaticSwap_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.OnBegin");

	UA_Rakk_ChromaticSwap_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_SwapElements
// (BlueprintCallable, BlueprintEvent)

void UA_Rakk_ChromaticSwap_C::Notify_SwapElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_SwapElements");

	UA_Rakk_ChromaticSwap_C_Notify_SwapElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_ChargeUp
// (BlueprintCallable, BlueprintEvent)

void UA_Rakk_ChromaticSwap_C::Notify_ChargeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_ChargeUp");

	UA_Rakk_ChromaticSwap_C_Notify_ChargeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_Explode
// (BlueprintCallable, BlueprintEvent)

void UA_Rakk_ChromaticSwap_C::Notify_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_Explode");

	UA_Rakk_ChromaticSwap_C_Notify_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.ExecuteUbergraph_A_Rakk_ChromaticSwap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_ChromaticSwap_C::ExecuteUbergraph_A_Rakk_ChromaticSwap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.ExecuteUbergraph_A_Rakk_ChromaticSwap");

	UA_Rakk_ChromaticSwap_C_ExecuteUbergraph_A_Rakk_ChromaticSwap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
