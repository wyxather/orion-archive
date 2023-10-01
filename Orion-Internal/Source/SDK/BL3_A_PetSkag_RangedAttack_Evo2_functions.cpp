// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_RangedAttack_Evo2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_RangedAttack_Evo2_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.OnBegin");

	UA_PetSkag_RangedAttack_Evo2_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_RangedAttack_Evo2_C::ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2");

	UA_PetSkag_RangedAttack_Evo2_C_ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
