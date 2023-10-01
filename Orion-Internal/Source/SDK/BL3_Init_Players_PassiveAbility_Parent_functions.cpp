// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Players_PassiveAbility_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_Players_PassiveAbility_Parent.Init_Players_PassiveAbility_Parent_C.GetPassiveSkillGrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Grade                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInit_Players_PassiveAbility_Parent_C::GetPassiveSkillGrade(class AActor* Context, class UClass* Skill, int* Grade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Players_PassiveAbility_Parent.Init_Players_PassiveAbility_Parent_C.GetPassiveSkillGrade");

	UInit_Players_PassiveAbility_Parent_C_GetPassiveSkillGrade_Params params;
	params.Context = Context;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grade != nullptr)
		*Grade = params.Grade;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
