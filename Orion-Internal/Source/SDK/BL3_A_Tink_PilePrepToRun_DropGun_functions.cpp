// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_PilePrepToRun_DropGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.DropGun
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_PilePrepToRun_DropGun_C::DropGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.DropGun");

	UA_Tink_PilePrepToRun_DropGun_C_DropGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.SwapGear
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_PilePrepToRun_DropGun_C::SwapGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.SwapGear");

	UA_Tink_PilePrepToRun_DropGun_C_SwapGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_PilePrepToRun_DropGun_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.OnBegin");

	UA_Tink_PilePrepToRun_DropGun_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.ExecuteUbergraph_A_Tink_PilePrepToRun_DropGun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_PilePrepToRun_DropGun_C::ExecuteUbergraph_A_Tink_PilePrepToRun_DropGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C.ExecuteUbergraph_A_Tink_PilePrepToRun_DropGun");

	UA_Tink_PilePrepToRun_DropGun_C_ExecuteUbergraph_A_Tink_PilePrepToRun_DropGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
