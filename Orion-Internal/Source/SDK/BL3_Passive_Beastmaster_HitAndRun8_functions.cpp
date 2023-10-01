// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun8_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_HitAndRun8_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnActivated");

	UPassive_Beastmaster_HitAndRun8_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnReloaded_HitAndRun8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_HitAndRun8_C::OnReloaded_HitAndRun8(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnReloaded_HitAndRun8");

	UPassive_Beastmaster_HitAndRun8_C_OnReloaded_HitAndRun8_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun8
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_HitAndRun8_C::ExecuteUbergraph_Passive_Beastmaster_HitAndRun8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun8");

	UPassive_Beastmaster_HitAndRun8_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
