// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_FullCan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_FullCan_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.OnActivated");

	UPassive_Gunner_FullCan_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.EnteredIronBear_FullCan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_FullCan_C::EnteredIronBear_FullCan(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.EnteredIronBear_FullCan");

	UPassive_Gunner_FullCan_C_EnteredIronBear_FullCan_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExitedIronBear_FullCan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_FullCan_C::ExitedIronBear_FullCan(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExitedIronBear_FullCan");

	UPassive_Gunner_FullCan_C_ExitedIronBear_FullCan_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExecuteUbergraph_Passive_Gunner_FullCan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_FullCan_C::ExecuteUbergraph_Passive_Gunner_FullCan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExecuteUbergraph_Passive_Gunner_FullCan");

	UPassive_Gunner_FullCan_C_ExecuteUbergraph_Passive_Gunner_FullCan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
