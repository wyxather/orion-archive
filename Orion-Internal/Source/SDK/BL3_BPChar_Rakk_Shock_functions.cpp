// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Rakk_Shock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_Shock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.UserConstructionScript");

	ABPChar_Rakk_Shock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Rakk_Shock_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.ReceiveBeginPlay");

	ABPChar_Rakk_Shock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.SpreadDamageAura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 SpreadToActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_Shock_C::SpreadDamageAura(class AActor** SpreadToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.SpreadDamageAura");

	ABPChar_Rakk_Shock_C_SpreadDamageAura_Params params;
	params.SpreadToActor = SpreadToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.ExecuteUbergraph_BPChar_Rakk_Shock
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_Shock_C::ExecuteUbergraph_BPChar_Rakk_Shock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.ExecuteUbergraph_BPChar_Rakk_Shock");

	ABPChar_Rakk_Shock_C_ExecuteUbergraph_BPChar_Rakk_Shock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
