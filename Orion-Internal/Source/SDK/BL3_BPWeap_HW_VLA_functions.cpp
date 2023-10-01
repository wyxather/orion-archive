// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_VLA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_VLA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.UserConstructionScript");

	ABPWeap_HW_VLA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_HW_VLA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ReceiveBeginPlay");

	ABPWeap_HW_VLA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.LoadShells
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_VLA_C::LoadShells()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.LoadShells");

	ABPWeap_HW_VLA_C_LoadShells_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ShellsLoaded
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_VLA_C::ShellsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ShellsLoaded");

	ABPWeap_HW_VLA_C_ShellsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ExecuteUbergraph_BPWeap_HW_VLA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_HW_VLA_C::ExecuteUbergraph_BPWeap_HW_VLA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ExecuteUbergraph_BPWeap_HW_VLA");

	ABPWeap_HW_VLA_C_ExecuteUbergraph_BPWeap_HW_VLA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
