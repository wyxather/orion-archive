// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Tink_ThrowGrenade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Tink_ThrowGrenade_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.OnEnd");

	UARandom_Tink_ThrowGrenade_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.SpawnGrenade
// (BlueprintCallable, BlueprintEvent)

void UARandom_Tink_ThrowGrenade_C::SpawnGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.SpawnGrenade");

	UARandom_Tink_ThrowGrenade_C_SpawnGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.Throw
// (BlueprintCallable, BlueprintEvent)

void UARandom_Tink_ThrowGrenade_C::Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.Throw");

	UARandom_Tink_ThrowGrenade_C_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.PrimeExplosive
// (BlueprintCallable, BlueprintEvent)

void UARandom_Tink_ThrowGrenade_C::PrimeExplosive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.PrimeExplosive");

	UARandom_Tink_ThrowGrenade_C_PrimeExplosive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Tink_ThrowGrenade_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.OnBegin");

	UARandom_Tink_ThrowGrenade_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.ExecuteUbergraph_ARandom_Tink_ThrowGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Tink_ThrowGrenade_C::ExecuteUbergraph_ARandom_Tink_ThrowGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Tink_ThrowGrenade.ARandom_Tink_ThrowGrenade_C.ExecuteUbergraph_ARandom_Tink_ThrowGrenade");

	UARandom_Tink_ThrowGrenade_C_ExecuteUbergraph_ARandom_Tink_ThrowGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
