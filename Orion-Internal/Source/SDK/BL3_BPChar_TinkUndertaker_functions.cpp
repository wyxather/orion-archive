// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkUndertaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_TinkUndertaker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.UserConstructionScript");

	ABPChar_TinkUndertaker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.Tink_SetWantsToFly
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_TinkUndertaker_C::Tink_SetWantsToFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.Tink_SetWantsToFly");

	ABPChar_TinkUndertaker_C_Tink_SetWantsToFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.Tink_SetWantsToLand
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_TinkUndertaker_C::Tink_SetWantsToLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.Tink_SetWantsToLand");

	ABPChar_TinkUndertaker_C_Tink_SetWantsToLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.ExecuteUbergraph_BPChar_TinkUndertaker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_TinkUndertaker_C::ExecuteUbergraph_BPChar_TinkUndertaker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TinkUndertaker.BPChar_TinkUndertaker_C.ExecuteUbergraph_BPChar_TinkUndertaker");

	ABPChar_TinkUndertaker_C_ExecuteUbergraph_BPChar_TinkUndertaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
