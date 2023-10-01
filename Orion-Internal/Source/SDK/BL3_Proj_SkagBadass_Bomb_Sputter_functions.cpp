// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagBadass_Bomb_Sputter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_SkagBadass_Bomb_Sputter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.UserConstructionScript");

	AProj_SkagBadass_Bomb_Sputter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagBadass_Bomb_Sputter_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnHitDamagableObject");

	AProj_SkagBadass_Bomb_Sputter_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagBadass_Bomb_Sputter_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnHitWorld");

	AProj_SkagBadass_Bomb_Sputter_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_SkagBadass_Bomb_Sputter_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnExplode");

	AProj_SkagBadass_Bomb_Sputter_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_SkagBadass_Bomb_Sputter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.ReceiveBeginPlay");

	AProj_SkagBadass_Bomb_Sputter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.ExecuteUbergraph_Proj_SkagBadass_Bomb_Sputter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_SkagBadass_Bomb_Sputter_C::ExecuteUbergraph_Proj_SkagBadass_Bomb_Sputter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.ExecuteUbergraph_Proj_SkagBadass_Bomb_Sputter");

	AProj_SkagBadass_Bomb_Sputter_C_ExecuteUbergraph_Proj_SkagBadass_Bomb_Sputter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
