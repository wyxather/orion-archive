// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Tink_Turret_Death2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Tink_Turret_Death2_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.OnBegin");

	UAHitReact_Tink_Turret_Death2_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.ExplodeTurret
// (BlueprintCallable, BlueprintEvent)

void UAHitReact_Tink_Turret_Death2_C::ExplodeTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.ExplodeTurret");

	UAHitReact_Tink_Turret_Death2_C_ExplodeTurret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Tink_Turret_Death2_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.OnEnd");

	UAHitReact_Tink_Turret_Death2_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.ExecuteUbergraph_AHitReact_Tink_Turret_Death2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Tink_Turret_Death2_C::ExecuteUbergraph_AHitReact_Tink_Turret_Death2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C.ExecuteUbergraph_AHitReact_Tink_Turret_Death2");

	UAHitReact_Tink_Turret_Death2_C_ExecuteUbergraph_AHitReact_Tink_Turret_Death2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
