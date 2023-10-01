// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_MAL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SM_MAL.BPWeap_SM_MAL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_MAL_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_MAL.BPWeap_SM_MAL_C.UserConstructionScript");

	ABPWeap_SM_MAL_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_MAL.BPWeap_SM_MAL_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_SM_MAL_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_MAL.BPWeap_SM_MAL_C.ReceiveBeginPlay");

	ABPWeap_SM_MAL_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_MAL.BPWeap_SM_MAL_C.ExecuteUbergraph_BPWeap_SM_MAL
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_MAL_C::ExecuteUbergraph_BPWeap_SM_MAL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_MAL.BPWeap_SM_MAL_C.ExecuteUbergraph_BPWeap_SM_MAL");

	ABPWeap_SM_MAL_C_ExecuteUbergraph_BPWeap_SM_MAL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
