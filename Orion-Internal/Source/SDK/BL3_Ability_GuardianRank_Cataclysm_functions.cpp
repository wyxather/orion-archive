// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Cataclysm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Cataclysm.Ability_GuardianRank_Cataclysm_C.ExecuteUbergraph_Ability_GuardianRank_Cataclysm
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Cataclysm_C::ExecuteUbergraph_Ability_GuardianRank_Cataclysm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Cataclysm.Ability_GuardianRank_Cataclysm_C.ExecuteUbergraph_Ability_GuardianRank_Cataclysm");

	UAbility_GuardianRank_Cataclysm_C_ExecuteUbergraph_Ability_GuardianRank_Cataclysm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
