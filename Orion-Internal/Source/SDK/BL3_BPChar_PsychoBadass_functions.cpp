// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PsychoBadass.BPChar_PsychoBadass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PsychoBadass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoBadass.BPChar_PsychoBadass_C.UserConstructionScript");

	ABPChar_PsychoBadass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoBadass.BPChar_PsychoBadass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PsychoBadass_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoBadass.BPChar_PsychoBadass_C.ReceiveBeginPlay");

	ABPChar_PsychoBadass_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoBadass.BPChar_PsychoBadass_C.ExecuteUbergraph_BPChar_PsychoBadass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoBadass_C::ExecuteUbergraph_BPChar_PsychoBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoBadass.BPChar_PsychoBadass_C.ExecuteUbergraph_BPChar_PsychoBadass");

	ABPChar_PsychoBadass_C_ExecuteUbergraph_BPChar_PsychoBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
