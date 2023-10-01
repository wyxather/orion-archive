// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Glass_A_Breakable_D_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.Randomize
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Glass_A_Breakable_D_C::Randomize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.Randomize");

	ABP_Glass_A_Breakable_D_C_Randomize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Glass_A_Breakable_D_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.UserConstructionScript");

	ABP_Glass_A_Breakable_D_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Glass_A_Breakable_D_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.ReceiveBeginPlay");

	ABP_Glass_A_Breakable_D_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.SetRandomSeed_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Seed                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Glass_A_Breakable_D_C::SetRandomSeed_2(int* Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.SetRandomSeed_2");

	ABP_Glass_A_Breakable_D_C_SetRandomSeed_2_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.ExecuteUbergraph_BP_Glass_A_Breakable_D
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Glass_A_Breakable_D_C::ExecuteUbergraph_BP_Glass_A_Breakable_D(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Glass_A_Breakable_D.BP_Glass_A_Breakable_D_C.ExecuteUbergraph_BP_Glass_A_Breakable_D");

	ABP_Glass_A_Breakable_D_C_ExecuteUbergraph_BP_Glass_A_Breakable_D_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
