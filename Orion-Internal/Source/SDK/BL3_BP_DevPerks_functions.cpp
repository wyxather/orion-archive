// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DevPerks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DevPerks.BP_DevPerks_C.UnlimitedAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::UnlimitedAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.UnlimitedAmmo");

	UBP_DevPerks_C_UnlimitedAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.UnlockAllCustomizations
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::UnlockAllCustomizations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.UnlockAllCustomizations");

	UBP_DevPerks_C_UnlockAllCustomizations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.KillEnemies
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::KillEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.KillEnemies");

	UBP_DevPerks_C_KillEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.SpawnAwesomeItems
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::SpawnAwesomeItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.SpawnAwesomeItems");

	UBP_DevPerks_C_SpawnAwesomeItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.GiveGoldenKeys
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::GiveGoldenKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveGoldenKeys");

	UBP_DevPerks_C_GiveGoldenKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.GiveEridium
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::GiveEridium()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveEridium");

	UBP_DevPerks_C_GiveEridium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.GiveCash
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::GiveCash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveCash");

	UBP_DevPerks_C_GiveCash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.GiveLevels
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DevPerks_C::GiveLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.GiveLevels");

	UBP_DevPerks_C_GiveLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.OnDeveloperPerkActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DevPerks_C::OnDeveloperPerkActivated(unsigned char* Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.OnDeveloperPerkActivated");

	UBP_DevPerks_C_OnDeveloperPerkActivated_Params params;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DevPerks.BP_DevPerks_C.ExecuteUbergraph_BP_DevPerks
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DevPerks_C::ExecuteUbergraph_BP_DevPerks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DevPerks.BP_DevPerks_C.ExecuteUbergraph_BP_DevPerks");

	UBP_DevPerks_C_ExecuteUbergraph_BP_DevPerks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
