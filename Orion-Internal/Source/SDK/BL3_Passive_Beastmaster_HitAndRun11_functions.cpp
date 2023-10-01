// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun11_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_HitAndRun11_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActivated");

	UPassive_Beastmaster_HitAndRun11_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActionSkillActivated_HitAndRun11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_HitAndRun11_C::OnActionSkillActivated_HitAndRun11(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActionSkillActivated_HitAndRun11");

	UPassive_Beastmaster_HitAndRun11_C_OnActionSkillActivated_HitAndRun11_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun11
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_HitAndRun11_C::ExecuteUbergraph_Passive_Beastmaster_HitAndRun11(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun11");

	UPassive_Beastmaster_HitAndRun11_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
