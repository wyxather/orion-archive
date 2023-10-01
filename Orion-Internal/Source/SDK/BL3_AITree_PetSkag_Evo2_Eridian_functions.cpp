// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PetSkag_Evo2_Eridian_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PetSkag_Evo2_Eridian.AITree_PetSkag_Evo2_Eridian_C.ExecuteUbergraph_AITree_PetSkag_Evo2_Eridian
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PetSkag_Evo2_Eridian_C::ExecuteUbergraph_AITree_PetSkag_Evo2_Eridian(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PetSkag_Evo2_Eridian.AITree_PetSkag_Evo2_Eridian_C.ExecuteUbergraph_AITree_PetSkag_Evo2_Eridian");

	UAITree_PetSkag_Evo2_Eridian_C_ExecuteUbergraph_AITree_PetSkag_Evo2_Eridian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
