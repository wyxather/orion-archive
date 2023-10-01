// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFireProjectile_Demoskag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPFireProjectile_Demoskag_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ReceiveBeginPlay");

	UBPFireProjectile_Demoskag_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.CheckTimeOfDay
// (BlueprintCallable, BlueprintEvent)

void UBPFireProjectile_Demoskag_C::CheckTimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.CheckTimeOfDay");

	UBPFireProjectile_Demoskag_C_CheckTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ExecuteUbergraph_BPFireProjectile_Demoskag
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFireProjectile_Demoskag_C::ExecuteUbergraph_BPFireProjectile_Demoskag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ExecuteUbergraph_BPFireProjectile_Demoskag");

	UBPFireProjectile_Demoskag_C_ExecuteUbergraph_BPFireProjectile_Demoskag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
