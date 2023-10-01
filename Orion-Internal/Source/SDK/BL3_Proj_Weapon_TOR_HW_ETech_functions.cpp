// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_ETech_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_ETech_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.UserConstructionScript");

	AProj_Weapon_TOR_HW_ETech_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_Weapon_TOR_HW_ETech_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp");

	AProj_Weapon_TOR_HW_ETech_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProj_Weapon_TOR_HW_ETech_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ReceiveDestroyed");

	AProj_Weapon_TOR_HW_ETech_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_TOR_HW_ETech_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ReceiveBeginPlay");

	AProj_Weapon_TOR_HW_ETech_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.RainDeath
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_ETech_C::RainDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.RainDeath");

	AProj_Weapon_TOR_HW_ETech_C_RainDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_TOR_HW_ETech_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.OnExplode");

	AProj_Weapon_TOR_HW_ETech_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_TOR_HW_ETech_C::ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech");

	AProj_Weapon_TOR_HW_ETech_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
