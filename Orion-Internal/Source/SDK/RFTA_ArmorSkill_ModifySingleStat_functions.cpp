// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_ModifySingleStat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.GetValue
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_ModifySingleStat_C::GetValue(int* Tier, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.GetValue");

	UArmorSkill_ModifySingleStat_C_GetValue_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_ModifySingleStat_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.OnComputeStats");

	UArmorSkill_ModifySingleStat_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.ExecuteUbergraph_ArmorSkill_ModifySingleStat
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_ModifySingleStat_C::ExecuteUbergraph_ArmorSkill_ModifySingleStat(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.ExecuteUbergraph_ArmorSkill_ModifySingleStat");

	UArmorSkill_ModifySingleStat_C_ExecuteUbergraph_ArmorSkill_ModifySingleStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
