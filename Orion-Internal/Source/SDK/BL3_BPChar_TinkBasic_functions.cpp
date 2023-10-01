// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_TinkBasic.BPChar_TinkBasic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_TinkBasic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TinkBasic.BPChar_TinkBasic_C.UserConstructionScript");

	ABPChar_TinkBasic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TinkBasic.BPChar_TinkBasic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_TinkBasic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TinkBasic.BPChar_TinkBasic_C.ReceiveBeginPlay");

	ABPChar_TinkBasic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TinkBasic.BPChar_TinkBasic_C.ExecuteUbergraph_BPChar_TinkBasic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_TinkBasic_C::ExecuteUbergraph_BPChar_TinkBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TinkBasic.BPChar_TinkBasic_C.ExecuteUbergraph_BPChar_TinkBasic");

	ABPChar_TinkBasic_C_ExecuteUbergraph_BPChar_TinkBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
