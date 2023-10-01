// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Death_TinkLoot_Death_F1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.LootSpray
// (BlueprintCallable, BlueprintEvent)

void UDeath_TinkLoot_Death_F1_C::LootSpray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.LootSpray");

	UDeath_TinkLoot_Death_F1_C_LootSpray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeath_TinkLoot_Death_F1_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.OnServerBegin");

	UDeath_TinkLoot_Death_F1_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.Notify_DeathPowerUp
// (BlueprintCallable, BlueprintEvent)

void UDeath_TinkLoot_Death_F1_C::Notify_DeathPowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.Notify_DeathPowerUp");

	UDeath_TinkLoot_Death_F1_C_Notify_DeathPowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.ExecuteUbergraph_Death_TinkLoot_Death_F1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeath_TinkLoot_Death_F1_C::ExecuteUbergraph_Death_TinkLoot_Death_F1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C.ExecuteUbergraph_Death_TinkLoot_Death_F1");

	UDeath_TinkLoot_Death_F1_C_ExecuteUbergraph_Death_TinkLoot_Death_F1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
