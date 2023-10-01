// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_Throw_L_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Throw_L_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.OnBegin");

	UA_Punk_Anointed_Throw_L_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.OnAnimEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Throw_L_C::OnAnimEnd(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.OnAnimEnd");

	UA_Punk_Anointed_Throw_L_C_OnAnimEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.ThrowLeftHand
// (BlueprintCallable, BlueprintEvent)

void UA_Punk_Anointed_Throw_L_C::ThrowLeftHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.ThrowLeftHand");

	UA_Punk_Anointed_Throw_L_C_ThrowLeftHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.ExecuteUbergraph_A_Punk_Anointed_Throw_L
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Throw_L_C::ExecuteUbergraph_A_Punk_Anointed_Throw_L(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_L.A_Punk_Anointed_Throw_L_C.ExecuteUbergraph_A_Punk_Anointed_Throw_L");

	UA_Punk_Anointed_Throw_L_C_ExecuteUbergraph_A_Punk_Anointed_Throw_L_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
