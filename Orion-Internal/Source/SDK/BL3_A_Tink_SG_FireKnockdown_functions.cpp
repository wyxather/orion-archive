// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_SG_FireKnockdown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tink_SG_FireKnockdown.A_Tink_SG_FireKnockdown_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_SG_FireKnockdown_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_SG_FireKnockdown.A_Tink_SG_FireKnockdown_C.OnBegin");

	UA_Tink_SG_FireKnockdown_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_SG_FireKnockdown.A_Tink_SG_FireKnockdown_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_SG_FireKnockdown_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_SG_FireKnockdown.A_Tink_SG_FireKnockdown_C.OnEnd");

	UA_Tink_SG_FireKnockdown_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_SG_FireKnockdown.A_Tink_SG_FireKnockdown_C.ExecuteUbergraph_A_Tink_SG_FireKnockdown
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_SG_FireKnockdown_C::ExecuteUbergraph_A_Tink_SG_FireKnockdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_SG_FireKnockdown.A_Tink_SG_FireKnockdown_C.ExecuteUbergraph_A_Tink_SG_FireKnockdown");

	UA_Tink_SG_FireKnockdown_C_ExecuteUbergraph_A_Tink_SG_FireKnockdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
