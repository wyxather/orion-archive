// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetLoader_Charge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnLoop
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetLoader_Charge_C::OnLoop(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnLoop");

	UACharge_PetLoader_Charge_C_OnLoop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.AttackCommandUsed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void UACharge_PetLoader_Charge_C::AttackCommandUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.AttackCommandUsed");

	UACharge_PetLoader_Charge_C_AttackCommandUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.StrikeDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void UACharge_PetLoader_Charge_C::StrikeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.StrikeDamage");

	UACharge_PetLoader_Charge_C_StrikeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnStrike
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetLoader_Charge_C::OnStrike(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnStrike");

	UACharge_PetLoader_Charge_C_OnStrike_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnHitWall
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetLoader_Charge_C::OnHitWall(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnHitWall");

	UACharge_PetLoader_Charge_C_OnHitWall_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetLoader_Charge_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerEnd");

	UACharge_PetLoader_Charge_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetLoader_Charge_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerBegin");

	UACharge_PetLoader_Charge_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.CallAttackCommandUsed
// (BlueprintCallable, BlueprintEvent)

void UACharge_PetLoader_Charge_C::CallAttackCommandUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.CallAttackCommandUsed");

	UACharge_PetLoader_Charge_C_CallAttackCommandUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.ExecuteUbergraph_ACharge_PetLoader_Charge
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_PetLoader_Charge_C::ExecuteUbergraph_ACharge_PetLoader_Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.ExecuteUbergraph_ACharge_PetLoader_Charge");

	UACharge_PetLoader_Charge_C_ExecuteUbergraph_ACharge_PetLoader_Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
