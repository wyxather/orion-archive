// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCine_Actor_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.CinematicStream
// (Public, BlueprintCallable, BlueprintEvent)

void ABPCine_Actor_Parent_C::CinematicStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.CinematicStream");

	ABPCine_Actor_Parent_C_CinematicStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCine_Actor_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.UserConstructionScript");

	ABPCine_Actor_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.StreamMe
// (BlueprintCallable, BlueprintEvent)

void ABPCine_Actor_Parent_C::StreamMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.StreamMe");

	ABPCine_Actor_Parent_C_StreamMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPCine_Actor_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.ReceiveBeginPlay");

	ABPCine_Actor_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.ExecuteUbergraph_BPCine_Actor_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCine_Actor_Parent_C::ExecuteUbergraph_BPCine_Actor_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCine_Actor_Parent.BPCine_Actor_Parent_C.ExecuteUbergraph_BPCine_Actor_Parent");

	ABPCine_Actor_Parent_C_ExecuteUbergraph_BPCine_Actor_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
