// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_ATL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_ATL_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.UserConstructionScript");

	ABPWeap_HW_ATL_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.Hide Pod
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_ATL_C::Hide_Pod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.Hide Pod");

	ABPWeap_HW_ATL_C_Hide_Pod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_HW_ATL_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.ReceiveBeginPlay");

	ABPWeap_HW_ATL_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.ExecuteUbergraph_BPWeap_HW_ATL
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_HW_ATL_C::ExecuteUbergraph_BPWeap_HW_ATL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_ATL.BPWeap_HW_ATL_C.ExecuteUbergraph_BPWeap_HW_ATL");

	ABPWeap_HW_ATL_C_ExecuteUbergraph_BPWeap_HW_ATL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
