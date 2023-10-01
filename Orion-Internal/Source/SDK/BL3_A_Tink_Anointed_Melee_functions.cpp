// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_Anointed_Melee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.MeleeAttack
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_Anointed_Melee_C::MeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.MeleeAttack");

	UA_Tink_Anointed_Melee_C_MeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Anointed_Melee_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.OnBegin");

	UA_Tink_Anointed_Melee_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.ExecuteUbergraph_A_Tink_Anointed_Melee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Anointed_Melee_C::ExecuteUbergraph_A_Tink_Anointed_Melee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_Melee.A_Tink_Anointed_Melee_C.ExecuteUbergraph_A_Tink_Anointed_Melee");

	UA_Tink_Anointed_Melee_C_ExecuteUbergraph_A_Tink_Anointed_Melee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
