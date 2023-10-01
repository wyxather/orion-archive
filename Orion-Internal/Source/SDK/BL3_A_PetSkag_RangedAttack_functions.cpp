// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_RangedAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_RangedAttack_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.OnBegin");

	UA_PetSkag_RangedAttack_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.Notify_Spit
// (BlueprintCallable, BlueprintEvent)

void UA_PetSkag_RangedAttack_C::Notify_Spit()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.Notify_Spit");

	UA_PetSkag_RangedAttack_C_Notify_Spit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.ExecuteUbergraph_A_PetSkag_RangedAttack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_RangedAttack_C::ExecuteUbergraph_A_PetSkag_RangedAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.ExecuteUbergraph_A_PetSkag_RangedAttack");

	UA_PetSkag_RangedAttack_C_ExecuteUbergraph_A_PetSkag_RangedAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
