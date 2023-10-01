// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Tink_WashingMachine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Tink_WashingMachine_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C.OnBegin");

	UASpawn_Tink_WashingMachine_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C.Notify_Attack
// (BlueprintCallable, BlueprintEvent)

void UASpawn_Tink_WashingMachine_C::Notify_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C.Notify_Attack");

	UASpawn_Tink_WashingMachine_C_Notify_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C.ExecuteUbergraph_ASpawn_Tink_WashingMachine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Tink_WashingMachine_C::ExecuteUbergraph_ASpawn_Tink_WashingMachine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C.ExecuteUbergraph_ASpawn_Tink_WashingMachine");

	UASpawn_Tink_WashingMachine_C_ExecuteUbergraph_ASpawn_Tink_WashingMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
