// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PsychoInfectedOnes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PsychoInfectedOnes.AITree_PsychoInfectedOnes_C.ExecuteUbergraph_AITree_PsychoInfectedOnes
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PsychoInfectedOnes_C::ExecuteUbergraph_AITree_PsychoInfectedOnes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PsychoInfectedOnes.AITree_PsychoInfectedOnes_C.ExecuteUbergraph_AITree_PsychoInfectedOnes");

	UAITree_PsychoInfectedOnes_C_ExecuteUbergraph_AITree_PsychoInfectedOnes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
