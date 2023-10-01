// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPlayerState_Default_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPPlayerState_Default.BPPlayerState_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPPlayerState_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPlayerState_Default.BPPlayerState_Default_C.UserConstructionScript");

	ABPPlayerState_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPlayerState_Default.BPPlayerState_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPPlayerState_Default_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPlayerState_Default.BPPlayerState_Default_C.ReceiveBeginPlay");

	ABPPlayerState_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPlayerState_Default.BPPlayerState_Default_C.ExecuteUbergraph_BPPlayerState_Default
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPlayerState_Default_C::ExecuteUbergraph_BPPlayerState_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPlayerState_Default.BPPlayerState_Default_C.ExecuteUbergraph_BPPlayerState_Default");

	ABPPlayerState_Default_C_ExecuteUbergraph_BPPlayerState_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
