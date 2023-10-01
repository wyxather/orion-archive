// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PetSkag_Evo1_Horned_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PetSkag_Evo1_Horned.AITree_PetSkag_Evo1_Horned_C.ExecuteUbergraph_AITree_PetSkag_Evo1_Horned
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PetSkag_Evo1_Horned_C::ExecuteUbergraph_AITree_PetSkag_Evo1_Horned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PetSkag_Evo1_Horned.AITree_PetSkag_Evo1_Horned_C.ExecuteUbergraph_AITree_PetSkag_Evo1_Horned");

	UAITree_PetSkag_Evo1_Horned_C_ExecuteUbergraph_AITree_PetSkag_Evo1_Horned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
