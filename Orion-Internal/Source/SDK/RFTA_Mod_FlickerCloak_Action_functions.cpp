// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FlickerCloak_Action_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldDecay
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_FlickerCloak_Action_C::GetShieldDecay(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldDecay");

	UMod_FlickerCloak_Action_C_GetShieldDecay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldMax
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_FlickerCloak_Action_C::GetShieldMax(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldMax");

	UMod_FlickerCloak_Action_C_GetShieldMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_FlickerCloak_Action_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.OnTick");

	UMod_FlickerCloak_Action_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.ExecuteUbergraph_Mod_FlickerCloak_Action
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_FlickerCloak_Action_C::ExecuteUbergraph_Mod_FlickerCloak_Action(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.ExecuteUbergraph_Mod_FlickerCloak_Action");

	UMod_FlickerCloak_Action_C_ExecuteUbergraph_Mod_FlickerCloak_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
