// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_SkillEnd_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C.AnointOnActionSkillCoolingDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility**      ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_SkillEnd_C::AnointOnActionSkillCoolingDown(class UOakActionAbility** ActionAbility, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C.AnointOnActionSkillCoolingDown");

	UAbility_AnointParent_SkillEnd_C_AnointOnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
