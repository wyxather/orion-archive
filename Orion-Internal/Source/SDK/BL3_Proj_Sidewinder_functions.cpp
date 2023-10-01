// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Sidewinder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Sidewinder.Proj_Sidewinder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.UserConstructionScript");

	AProj_Sidewinder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.InitializeElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ElementType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Sidewinder_C::InitializeElement(EOakElementalType ElementType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.InitializeElement");

	AProj_Sidewinder_C_InitializeElement_Params params;
	params.ElementType = ElementType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetFuseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewFuseTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Sidewinder_C::TinkSuicideBomb_SetFuseTimer(float NewFuseTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetFuseTimer");

	AProj_Sidewinder_C_TinkSuicideBomb_SetFuseTimer_Params params;
	params.NewFuseTime = NewFuseTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetCurrentHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewCurrentHealth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Sidewinder_C::TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_SetCurrentHealth");

	AProj_Sidewinder_C_TinkSuicideBomb_SetCurrentHealth_Params params;
	params.NewCurrentHealth = NewCurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_StartSuicide
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::TinkSuicideBomb_StartSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.TinkSuicideBomb_StartSuicide");

	AProj_Sidewinder_C_TinkSuicideBomb_StartSuicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Prime");

	AProj_Sidewinder_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Drop");

	AProj_Sidewinder_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.HNT_Throw");

	AProj_Sidewinder_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Sidewinder_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.OnExplode");

	AProj_Sidewinder_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Sidewinder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveBeginPlay");

	AProj_Sidewinder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.FuseTimerExpired
// (BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::FuseTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.FuseTimerExpired");

	AProj_Sidewinder_C_FuseTimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Sidewinder_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.ReceiveActorBeginOverlap");

	AProj_Sidewinder_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.FindHomingTarget
// (BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::FindHomingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.FindHomingTarget");

	AProj_Sidewinder_C_FindHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.DeploySticky
// (BlueprintCallable, BlueprintEvent)

void AProj_Sidewinder_C::DeploySticky()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.DeploySticky");

	AProj_Sidewinder_C_DeploySticky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Sidewinder.Proj_Sidewinder_C.ExecuteUbergraph_Proj_Sidewinder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Sidewinder_C::ExecuteUbergraph_Proj_Sidewinder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Sidewinder.Proj_Sidewinder_C.ExecuteUbergraph_Proj_Sidewinder");

	AProj_Sidewinder_C_ExecuteUbergraph_Proj_Sidewinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
