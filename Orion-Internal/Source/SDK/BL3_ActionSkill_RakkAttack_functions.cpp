// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_RakkAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)

void UActionSkill_RakkAttack_C::OnStartActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.OnStartActionAbility");

	UActionSkill_RakkAttack_C_OnStartActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.ExecuteUbergraph_ActionSkill_RakkAttack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionSkill_RakkAttack_C::ExecuteUbergraph_ActionSkill_RakkAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.ExecuteUbergraph_ActionSkill_RakkAttack");

	UActionSkill_RakkAttack_C_ExecuteUbergraph_ActionSkill_RakkAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
