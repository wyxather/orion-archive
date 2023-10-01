// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PunkBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PunkBadass.BPChar_PunkBadass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PunkBadass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBadass.BPChar_PunkBadass_C.UserConstructionScript");

	ABPChar_PunkBadass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PunkBadass.BPChar_PunkBadass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PunkBadass_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBadass.BPChar_PunkBadass_C.ReceiveBeginPlay");

	ABPChar_PunkBadass_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PunkBadass.BPChar_PunkBadass_C.ExecuteUbergraph_BPChar_PunkBadass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PunkBadass_C::ExecuteUbergraph_BPChar_PunkBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PunkBadass.BPChar_PunkBadass_C.ExecuteUbergraph_BPChar_PunkBadass");

	ABPChar_PunkBadass_C_ExecuteUbergraph_BPChar_PunkBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
