// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_SwoopBreath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Rakk_SwoopBreath.A_Rakk_SwoopBreath_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopBreath_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopBreath.A_Rakk_SwoopBreath_C.OnBegin");

	UA_Rakk_SwoopBreath_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopBreath.A_Rakk_SwoopBreath_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopBreath_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopBreath.A_Rakk_SwoopBreath_C.OnEnd");

	UA_Rakk_SwoopBreath_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopBreath.A_Rakk_SwoopBreath_C.ExecuteUbergraph_A_Rakk_SwoopBreath
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopBreath_C::ExecuteUbergraph_A_Rakk_SwoopBreath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopBreath.A_Rakk_SwoopBreath_C.ExecuteUbergraph_A_Rakk_SwoopBreath");

	UA_Rakk_SwoopBreath_C_ExecuteUbergraph_A_Rakk_SwoopBreath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
