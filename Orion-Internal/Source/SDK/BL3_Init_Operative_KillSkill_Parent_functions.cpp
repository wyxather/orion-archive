// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_KillSkill_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_Operative_KillSkill_Parent.Init_Operative_KillSkill_Parent_C.Get Death Follows Close Bonus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ability_Mod_Bonus              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInit_Operative_KillSkill_Parent_C::Get_Death_Follows_Close_Bonus(class UObject* Object, float* Ability_Mod_Bonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Operative_KillSkill_Parent.Init_Operative_KillSkill_Parent_C.Get Death Follows Close Bonus");

	UInit_Operative_KillSkill_Parent_C_Get_Death_Follows_Close_Bonus_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ability_Mod_Bonus != nullptr)
		*Ability_Mod_Bonus = params.Ability_Mod_Bonus;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
