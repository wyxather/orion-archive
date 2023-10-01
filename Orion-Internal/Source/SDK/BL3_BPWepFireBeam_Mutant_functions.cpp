// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireBeam_Mutant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWepFireBeam_Mutant_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ReceiveBeginPlay");

	UBPWepFireBeam_Mutant_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ExecuteUbergraph_BPWepFireBeam_Mutant
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWepFireBeam_Mutant_C::ExecuteUbergraph_BPWepFireBeam_Mutant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ExecuteUbergraph_BPWepFireBeam_Mutant");

	UBPWepFireBeam_Mutant_C_ExecuteUbergraph_BPWepFireBeam_Mutant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
