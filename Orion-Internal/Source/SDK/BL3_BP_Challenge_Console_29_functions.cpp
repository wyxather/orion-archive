// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_29_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.CheckSticky
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSticky                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_28_C::CheckSticky(class UObject* Object, bool* isSticky)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.CheckSticky");

	UBP_Challenge_Console_28_C_CheckSticky_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isSticky != nullptr)
		*isSticky = params.isSticky;
}


// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.GrenadeDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_28_C::GrenadeDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.GrenadeDestroyed");

	UBP_Challenge_Console_28_C_GrenadeDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.CausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Challenge_Console_28_C::CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.CausedDeath");

	UBP_Challenge_Console_28_C_CausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_28_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.OnInitChallengeInstance");

	UBP_Challenge_Console_28_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.ExecuteUbergraph_BP_Challenge_Console_29
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_28_C::ExecuteUbergraph_BP_Challenge_Console_29(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.ExecuteUbergraph_BP_Challenge_Console_29");

	UBP_Challenge_Console_28_C_ExecuteUbergraph_BP_Challenge_Console_29_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
