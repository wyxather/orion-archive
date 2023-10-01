// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Reciprocity_Action_Offense_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArmorSkill_Reciprocity_Action_Offense_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.ModifyDamage");

	UArmorSkill_Reciprocity_Action_Offense_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Reciprocity_Action_Offense_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.OnComputeStats");

	UArmorSkill_Reciprocity_Action_Offense_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.OnReapplyBuff
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Reciprocity_Action_Offense_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.OnReapplyBuff");

	UArmorSkill_Reciprocity_Action_Offense_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Offense
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Reciprocity_Action_Offense_C::ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Offense(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C.ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Offense");

	UArmorSkill_Reciprocity_Action_Offense_C_ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Offense_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
