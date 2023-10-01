// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_Ep05_Sanctuary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Prologue_M_Ep05_Sanctuary.Prologue_M_Ep05_Sanctuary_C.MRE_04LeavePandora
// (BlueprintCallable, BlueprintEvent)

void APrologue_M_Ep05_Sanctuary_C::MRE_04LeavePandora()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_Ep05_Sanctuary.Prologue_M_Ep05_Sanctuary_C.MRE_04LeavePandora");

	APrologue_M_Ep05_Sanctuary_C_MRE_04LeavePandora_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prologue_M_Ep05_Sanctuary.Prologue_M_Ep05_Sanctuary_C.ExecuteUbergraph_Prologue_M_Ep05_Sanctuary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrologue_M_Ep05_Sanctuary_C::ExecuteUbergraph_Prologue_M_Ep05_Sanctuary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_Ep05_Sanctuary.Prologue_M_Ep05_Sanctuary_C.ExecuteUbergraph_Prologue_M_Ep05_Sanctuary");

	APrologue_M_Ep05_Sanctuary_C_ExecuteUbergraph_Prologue_M_Ep05_Sanctuary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
