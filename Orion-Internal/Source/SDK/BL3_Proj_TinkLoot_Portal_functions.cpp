// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TinkLoot_Portal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_TinkLoot_Portal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.UserConstructionScript");

	AProj_TinkLoot_Portal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_TinkLoot_Portal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.ReceiveBeginPlay");

	AProj_TinkLoot_Portal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_TinkLoot_Portal_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.OnExplode");

	AProj_TinkLoot_Portal_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.ExecuteUbergraph_Proj_TinkLoot_Portal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_TinkLoot_Portal_C::ExecuteUbergraph_Proj_TinkLoot_Portal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinkLoot_Portal.Proj_TinkLoot_Portal_C.ExecuteUbergraph_Proj_TinkLoot_Portal");

	AProj_TinkLoot_Portal_C_ExecuteUbergraph_Proj_TinkLoot_Portal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
