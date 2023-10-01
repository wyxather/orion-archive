// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged9_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged9_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnActivated");

	UPassive_Beastmaster_Ranged9_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged9_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnPaused");

	UPassive_Beastmaster_Ranged9_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged9_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnDeactivated");

	UPassive_Beastmaster_Ranged9_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged9_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.OnResumed");

	UPassive_Beastmaster_Ranged9_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.ExecuteUbergraph_Passive_Beastmaster_Ranged9
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged9_C::ExecuteUbergraph_Passive_Beastmaster_Ranged9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C.ExecuteUbergraph_Passive_Beastmaster_Ranged9");

	UPassive_Beastmaster_Ranged9_C_ExecuteUbergraph_Passive_Beastmaster_Ranged9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
