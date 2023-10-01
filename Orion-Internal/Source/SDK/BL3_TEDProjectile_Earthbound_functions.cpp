// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Earthbound_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Earthbound_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.UserConstructionScript");

	ATEDProjectile_Earthbound_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Earthbound_C::GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33");

	ATEDProjectile_Earthbound_C_GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Earthbound_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ReceiveBeginPlay");

	ATEDProjectile_Earthbound_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.OnExplode
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Earthbound_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.OnExplode");

	ATEDProjectile_Earthbound_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ExecuteUbergraph_TEDProjectile_Earthbound
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Earthbound_C::ExecuteUbergraph_TEDProjectile_Earthbound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ExecuteUbergraph_TEDProjectile_Earthbound");

	ATEDProjectile_Earthbound_C_ExecuteUbergraph_TEDProjectile_Earthbound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
