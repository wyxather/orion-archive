// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_SomeForTheRoad_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_SomeForTheRoad_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.OnActivated");

	UPassive_Gunner_SomeForTheRoad_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.BronzeAgeRage_ExitedIronBear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_SomeForTheRoad_C::BronzeAgeRage_ExitedIronBear(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.BronzeAgeRage_ExitedIronBear");

	UPassive_Gunner_SomeForTheRoad_C_BronzeAgeRage_ExitedIronBear_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.ExecuteUbergraph_Passive_Gunner_SomeForTheRoad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_SomeForTheRoad_C::ExecuteUbergraph_Passive_Gunner_SomeForTheRoad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.ExecuteUbergraph_Passive_Gunner_SomeForTheRoad");

	UPassive_Gunner_SomeForTheRoad_C_ExecuteUbergraph_Passive_Gunner_SomeForTheRoad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
