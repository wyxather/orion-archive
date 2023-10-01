// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Lilith_PhaseOut_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.PhaseoutFX
// (BlueprintCallable, BlueprintEvent)

void UA_Lilith_PhaseOut_C::PhaseoutFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.PhaseoutFX");

	UA_Lilith_PhaseOut_C_PhaseoutFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhaseOut_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.OnBegin");

	UA_Lilith_PhaseOut_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.ExecuteUbergraph_A_Lilith_PhaseOut
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhaseOut_C::ExecuteUbergraph_A_Lilith_PhaseOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.ExecuteUbergraph_A_Lilith_PhaseOut");

	UA_Lilith_PhaseOut_C_ExecuteUbergraph_A_Lilith_PhaseOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
