// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Dread_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Dread_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnActivated");

	UPassiveSkill_Siren_Dread_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnGraspedTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxCharacter*           GraspedTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Dread_C::OnGraspedTarget(class AGbxCharacter* GraspedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnGraspedTarget");

	UPassiveSkill_Siren_Dread_C_OnGraspedTarget_Params params;
	params.GraspedTarget = GraspedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnKilledGraspedTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           GraspedTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Dread_C::OnKilledGraspedTarget(class AActor* Killer, class AGbxCharacter* GraspedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnKilledGraspedTarget");

	UPassiveSkill_Siren_Dread_C_OnKilledGraspedTarget_Params params;
	params.Killer = Killer;
	params.GraspedTarget = GraspedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.ExecuteUbergraph_PassiveSkill_Siren_Dread
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Dread_C::ExecuteUbergraph_PassiveSkill_Siren_Dread(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.ExecuteUbergraph_PassiveSkill_Siren_Dread");

	UPassiveSkill_Siren_Dread_C_ExecuteUbergraph_PassiveSkill_Siren_Dread_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
