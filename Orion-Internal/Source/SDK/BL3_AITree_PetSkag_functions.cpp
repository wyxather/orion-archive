// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PetSkag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PetSkag.AITree_PetSkag_C.ExecuteUbergraph_AITree_PetSkag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PetSkag_C::ExecuteUbergraph_AITree_PetSkag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PetSkag.AITree_PetSkag_C.ExecuteUbergraph_AITree_PetSkag");

	UAITree_PetSkag_C_ExecuteUbergraph_AITree_PetSkag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
