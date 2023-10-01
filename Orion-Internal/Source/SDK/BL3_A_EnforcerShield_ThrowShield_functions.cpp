// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_EnforcerShield_ThrowShield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_EnforcerShield_ThrowShield_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.OnBegin");

	UA_EnforcerShield_ThrowShield_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_EnforcerShield_ThrowShield_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.OnEnd");

	UA_EnforcerShield_ThrowShield_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.Notify_ShieldThrow
// (BlueprintCallable, BlueprintEvent)

void UA_EnforcerShield_ThrowShield_C::Notify_ShieldThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.Notify_ShieldThrow");

	UA_EnforcerShield_ThrowShield_C_Notify_ShieldThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.Notify_TransformToGun
// (BlueprintCallable, BlueprintEvent)

void UA_EnforcerShield_ThrowShield_C::Notify_TransformToGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.Notify_TransformToGun");

	UA_EnforcerShield_ThrowShield_C_Notify_TransformToGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.ExecuteUbergraph_A_EnforcerShield_ThrowShield
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_EnforcerShield_ThrowShield_C::ExecuteUbergraph_A_EnforcerShield_ThrowShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.ExecuteUbergraph_A_EnforcerShield_ThrowShield");

	UA_EnforcerShield_ThrowShield_C_ExecuteUbergraph_A_EnforcerShield_ThrowShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
