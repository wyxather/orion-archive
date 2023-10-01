// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_GrenadeMod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPClass_GrenadeMod.BPClass_GrenadeMod_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPClass_GrenadeMod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPClass_GrenadeMod.BPClass_GrenadeMod_C.UserConstructionScript");

	ABPClass_GrenadeMod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPClass_GrenadeMod.BPClass_GrenadeMod_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPClass_GrenadeMod_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPClass_GrenadeMod.BPClass_GrenadeMod_C.ReceiveBeginPlay");

	ABPClass_GrenadeMod_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPClass_GrenadeMod.BPClass_GrenadeMod_C.ExecuteUbergraph_BPClass_GrenadeMod
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPClass_GrenadeMod_C::ExecuteUbergraph_BPClass_GrenadeMod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPClass_GrenadeMod.BPClass_GrenadeMod_C.ExecuteUbergraph_BPClass_GrenadeMod");

	ABPClass_GrenadeMod_C_ExecuteUbergraph_BPClass_GrenadeMod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
