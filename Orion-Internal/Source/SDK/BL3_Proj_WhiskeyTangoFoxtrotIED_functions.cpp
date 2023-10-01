// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_WhiskeyTangoFoxtrotIED_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_WhiskeyTangoFoxtrotIED_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.UserConstructionScript");

	AProj_WhiskeyTangoFoxtrotIED_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_WhiskeyTangoFoxtrotIED_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnExplode");

	AProj_WhiskeyTangoFoxtrotIED_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_WhiskeyTangoFoxtrotIED_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitWorld");

	AProj_WhiskeyTangoFoxtrotIED_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_WhiskeyTangoFoxtrotIED_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitEnemy");

	AProj_WhiskeyTangoFoxtrotIED_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_WhiskeyTangoFoxtrotIED_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ReceiveBeginPlay");

	AProj_WhiskeyTangoFoxtrotIED_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_WhiskeyTangoFoxtrotIED_C::BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED");

	AProj_WhiskeyTangoFoxtrotIED_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_WhiskeyTangoFoxtrotIED_C::ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED");

	AProj_WhiskeyTangoFoxtrotIED_C_ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
