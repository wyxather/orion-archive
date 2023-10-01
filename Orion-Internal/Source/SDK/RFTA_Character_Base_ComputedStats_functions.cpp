// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Base_ComputedStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ScaleArmorStat
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StatName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Base_ComputedStats_C::ScaleArmorStat(struct FName* StatName, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ScaleArmorStat");

	UCharacter_Base_ComputedStats_C_ScaleArmorStat_Params params;
	params.StatName = StatName;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyExperience
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Base_ComputedStats_C::ModifyExperience(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyExperience");

	UCharacter_Base_ComputedStats_C_ModifyExperience_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyArmorAndResistance
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Base_ComputedStats_C::ModifyArmorAndResistance(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyArmorAndResistance");

	UCharacter_Base_ComputedStats_C_ModifyArmorAndResistance_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyHealth
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Base_ComputedStats_C::ModifyHealth(int* Level, int* NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyHealth");

	UCharacter_Base_ComputedStats_C_ModifyHealth_Params params;
	params.Level = Level;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyDamage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Base_ComputedStats_C::ModifyDamage(int* Level, int* NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ModifyDamage");

	UCharacter_Base_ComputedStats_C_ModifyDamage_Params params;
	params.Level = Level;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UCharacter_Base_ComputedStats_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.OnPostComputeStats");

	UCharacter_Base_ComputedStats_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ExecuteUbergraph_Character_Base_ComputedStats
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Base_ComputedStats_C::ExecuteUbergraph_Character_Base_ComputedStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Base_ComputedStats.Character_Base_ComputedStats_C.ExecuteUbergraph_Character_Base_ComputedStats");

	UCharacter_Base_ComputedStats_C_ExecuteUbergraph_Character_Base_ComputedStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
