// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Mod_Banish_Footprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Mod_Banish_Footprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.ReceiveBeginPlay");

	ABP_Mod_Banish_Footprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.SoftDestroy
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Mod_Banish_Footprint_C::SoftDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.SoftDestroy");

	ABP_Mod_Banish_Footprint_C_SoftDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.SetDuration
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mod_Banish_Footprint_C::SetDuration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.SetDuration");

	ABP_Mod_Banish_Footprint_C_SetDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.ExecuteUbergraph_BP_Mod_Banish_Footprint
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mod_Banish_Footprint_C::ExecuteUbergraph_BP_Mod_Banish_Footprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Banish_Footprint.BP_Mod_Banish_Footprint_C.ExecuteUbergraph_BP_Mod_Banish_Footprint");

	ABP_Mod_Banish_Footprint_C_ExecuteUbergraph_BP_Mod_Banish_Footprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
