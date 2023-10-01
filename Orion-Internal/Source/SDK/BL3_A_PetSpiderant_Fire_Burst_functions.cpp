// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_Fire_Burst_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.Notify_SkillUse
// (BlueprintCallable, BlueprintEvent)

void UA_PetSpiderant_Fire_Burst_C::Notify_SkillUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.Notify_SkillUse");

	UA_PetSpiderant_Fire_Burst_C_Notify_SkillUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.ExecuteUbergraph_A_PetSpiderant_Fire_Burst
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSpiderant_Fire_Burst_C::ExecuteUbergraph_A_PetSpiderant_Fire_Burst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.ExecuteUbergraph_A_PetSpiderant_Fire_Burst");

	UA_PetSpiderant_Fire_Burst_C_ExecuteUbergraph_A_PetSpiderant_Fire_Burst_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
