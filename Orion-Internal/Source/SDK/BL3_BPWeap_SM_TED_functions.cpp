// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_TED_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SM_TED.BPWeap_SM_TED_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_TED_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED.BPWeap_SM_TED_C.UserConstructionScript");

	ABPWeap_SM_TED_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED.BPWeap_SM_TED_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_SM_TED_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED.BPWeap_SM_TED_C.ReceiveBeginPlay");

	ABPWeap_SM_TED_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED.BPWeap_SM_TED_C.ExecuteUbergraph_BPWeap_SM_TED
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_TED_C::ExecuteUbergraph_BPWeap_SM_TED(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED.BPWeap_SM_TED_C.ExecuteUbergraph_BPWeap_SM_TED");

	ABPWeap_SM_TED_C_ExecuteUbergraph_BPWeap_SM_TED_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
