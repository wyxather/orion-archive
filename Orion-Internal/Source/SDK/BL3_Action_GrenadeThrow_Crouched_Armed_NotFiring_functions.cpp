// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GrenadeThrow_Crouched_Armed_NotFiring_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_GrenadeThrow_Crouched_Armed_NotFiring_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.OnBegin");

	UAction_GrenadeThrow_Crouched_Armed_NotFiring_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_GrenadeThrow_Crouched_Armed_NotFiring_C::ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Crouched_Armed_NotFiring.Action_GrenadeThrow_Crouched_Armed_NotFiring_C.ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring");

	UAction_GrenadeThrow_Crouched_Armed_NotFiring_C_ExecuteUbergraph_Action_GrenadeThrow_Crouched_Armed_NotFiring_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
