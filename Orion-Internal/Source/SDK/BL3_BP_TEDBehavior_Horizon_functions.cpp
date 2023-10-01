// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TEDBehavior_Horizon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_OnComboTargetTriggered
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ATedioreProjectile**     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TEDBehavior_Horizon_C::K2_OnComboTargetTriggered(class ATedioreProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_OnComboTargetTriggered");

	UBP_TEDBehavior_Horizon_C_K2_OnComboTargetTriggered_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_ComboTargetTriggeredEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ATedioreProjectile**     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TEDBehavior_Horizon_C::K2_ComboTargetTriggeredEvent(class ATedioreProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_ComboTargetTriggeredEvent");

	UBP_TEDBehavior_Horizon_C_K2_ComboTargetTriggeredEvent_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.ExecuteUbergraph_BP_TEDBehavior_Horizon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TEDBehavior_Horizon_C::ExecuteUbergraph_BP_TEDBehavior_Horizon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.ExecuteUbergraph_BP_TEDBehavior_Horizon");

	UBP_TEDBehavior_Horizon_C_ExecuteUbergraph_BP_TEDBehavior_Horizon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
