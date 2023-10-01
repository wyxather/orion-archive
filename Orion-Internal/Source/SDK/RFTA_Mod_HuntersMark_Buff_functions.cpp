// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_HuntersMark_Buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_HuntersMark_Buff_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStop");

	UMod_HuntersMark_Buff_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.MarkEnemies
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UMod_HuntersMark_Buff_C::MarkEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.MarkEnemies");

	UMod_HuntersMark_Buff_C_MarkEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_HuntersMark_Buff_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStart");

	UMod_HuntersMark_Buff_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.ExecuteUbergraph_Mod_HuntersMark_Buff
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_HuntersMark_Buff_C::ExecuteUbergraph_Mod_HuntersMark_Buff(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.ExecuteUbergraph_Mod_HuntersMark_Buff");

	UMod_HuntersMark_Buff_C_ExecuteUbergraph_Mod_HuntersMark_Buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
