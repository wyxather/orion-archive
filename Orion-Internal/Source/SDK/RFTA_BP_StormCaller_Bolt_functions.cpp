// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_StormCaller_Bolt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Snap to Ceiling and floor
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StormCaller_Bolt_C::Snap_to_Ceiling_and_floor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Snap to Ceiling and floor");

	ABP_StormCaller_Bolt_C_Snap_to_Ceiling_and_floor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Floor Check
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_StormCaller_Bolt_C::Floor_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Floor Check");

	ABP_StormCaller_Bolt_C_Floor_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Ceiling Check
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_StormCaller_Bolt_C::Ceiling_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.Ceiling Check");

	ABP_StormCaller_Bolt_C_Ceiling_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlaySpawnFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_StormCaller_Bolt_C::PlaySpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlaySpawnFX");

	ABP_StormCaller_Bolt_C_PlaySpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlayStrikeFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_StormCaller_Bolt_C::PlayStrikeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.PlayStrikeFX");

	ABP_StormCaller_Bolt_C_PlayStrikeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_StormCaller_Bolt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ReceiveBeginPlay");

	ABP_StormCaller_Bolt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ExecuteUbergraph_BP_StormCaller_Bolt
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormCaller_Bolt_C::ExecuteUbergraph_BP_StormCaller_Bolt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StormCaller_Bolt.BP_StormCaller_Bolt_C.ExecuteUbergraph_BP_StormCaller_Bolt");

	ABP_StormCaller_Bolt_C_ExecuteUbergraph_BP_StormCaller_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
