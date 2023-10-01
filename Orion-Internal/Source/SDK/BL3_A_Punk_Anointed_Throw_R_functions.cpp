// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_Throw_R_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Throw_R_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.OnBegin");

	UA_Punk_Anointed_Throw_R_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.OnAnimEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Throw_R_C::OnAnimEnd(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.OnAnimEnd");

	UA_Punk_Anointed_Throw_R_C_OnAnimEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.Throw
// (BlueprintCallable, BlueprintEvent)

void UA_Punk_Anointed_Throw_R_C::Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.Throw");

	UA_Punk_Anointed_Throw_R_C_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.ExecuteUbergraph_A_Punk_Anointed_Throw_R
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Punk_Anointed_Throw_R_C::ExecuteUbergraph_A_Punk_Anointed_Throw_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.ExecuteUbergraph_A_Punk_Anointed_Throw_R");

	UA_Punk_Anointed_Throw_R_C_ExecuteUbergraph_A_Punk_Anointed_Throw_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
