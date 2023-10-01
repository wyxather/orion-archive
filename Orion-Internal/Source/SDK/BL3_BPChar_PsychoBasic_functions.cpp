// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PsychoBasic.BPChar_PsychoBasic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PsychoBasic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoBasic.BPChar_PsychoBasic_C.UserConstructionScript");

	ABPChar_PsychoBasic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoBasic.BPChar_PsychoBasic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PsychoBasic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoBasic.BPChar_PsychoBasic_C.ReceiveBeginPlay");

	ABPChar_PsychoBasic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoBasic.BPChar_PsychoBasic_C.ExecuteUbergraph_BPChar_PsychoBasic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoBasic_C::ExecuteUbergraph_BPChar_PsychoBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoBasic.BPChar_PsychoBasic_C.ExecuteUbergraph_BPChar_PsychoBasic");

	ABPChar_PsychoBasic_C_ExecuteUbergraph_BPChar_PsychoBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
