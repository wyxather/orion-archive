// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Armor_ComputedStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Armor_ComputedStats.Armor_ComputedStats_C.OnComputeDerivedStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmor_ComputedStats_C::OnComputeDerivedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Armor_ComputedStats.Armor_ComputedStats_C.OnComputeDerivedStats");

	UArmor_ComputedStats_C_OnComputeDerivedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Armor_ComputedStats.Armor_ComputedStats_C.ExecuteUbergraph_Armor_ComputedStats
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmor_ComputedStats_C::ExecuteUbergraph_Armor_ComputedStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Armor_ComputedStats.Armor_ComputedStats_C.ExecuteUbergraph_Armor_ComputedStats");

	UArmor_ComputedStats_C_ExecuteUbergraph_Armor_ComputedStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
