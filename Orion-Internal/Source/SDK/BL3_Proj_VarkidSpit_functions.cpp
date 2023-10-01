// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_VarkidSpit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_VarkidSpit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.UserConstructionScript");

	AProj_VarkidSpit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_VarkidSpit_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Throw");

	AProj_VarkidSpit_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_VarkidSpit_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Prime");

	AProj_VarkidSpit_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_VarkidSpit_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Drop");

	AProj_VarkidSpit_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_VarkidSpit_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnExplode");

	AProj_VarkidSpit_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_VarkidSpit_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnHitWorld");

	AProj_VarkidSpit_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_VarkidSpit_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnHitDamagableObject");

	AProj_VarkidSpit_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VarkidSpit.Proj_VarkidSpit_C.ExecuteUbergraph_Proj_VarkidSpit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_VarkidSpit_C::ExecuteUbergraph_Proj_VarkidSpit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VarkidSpit.Proj_VarkidSpit_C.ExecuteUbergraph_Proj_VarkidSpit");

	AProj_VarkidSpit_C_ExecuteUbergraph_Proj_VarkidSpit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
