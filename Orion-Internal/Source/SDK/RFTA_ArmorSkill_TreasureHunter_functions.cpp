// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TreasureHunter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.GetDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_TreasureHunter_C::GetDescription(class AActor** Actor, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.GetDescription");

	UArmorSkill_TreasureHunter_C_GetDescription_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.GetTierDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_TreasureHunter_C::GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.GetTierDescription");

	UArmorSkill_TreasureHunter_C_GetTierDescription_Params params;
	params.Actor = Actor;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_TreasureHunter_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.OnComputeStats");

	UArmorSkill_TreasureHunter_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.ExecuteUbergraph_ArmorSkill_TreasureHunter
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_TreasureHunter_C::ExecuteUbergraph_ArmorSkill_TreasureHunter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.ExecuteUbergraph_ArmorSkill_TreasureHunter");

	UArmorSkill_TreasureHunter_C_ExecuteUbergraph_ArmorSkill_TreasureHunter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
