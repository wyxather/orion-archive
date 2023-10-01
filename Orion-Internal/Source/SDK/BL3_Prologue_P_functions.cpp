// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_P_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Prologue_P.Prologue_P_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrologue_P_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_P.Prologue_P_C.ReceiveBeginPlay");

	APrologue_P_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prologue_P.Prologue_P_C.ExecuteUbergraph_Prologue_P
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrologue_P_C::ExecuteUbergraph_Prologue_P(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_P.Prologue_P_C.ExecuteUbergraph_Prologue_P");

	APrologue_P_C_ExecuteUbergraph_Prologue_P_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
